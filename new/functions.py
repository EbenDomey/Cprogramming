import random as rd
import math as mt
# chr_list = ['chr1', 'chr2', 'chr3', 'chr4', 'chr5']
# i = rd.randint(0,len(chr_list)-1)

# chr_dict = {}
# for item in chr_list:
#     chr_dict[item] = rd.randint(0, len(item)-1)

# strand = ('+', '-')
# t = rd.randint(0, len(strand)-1)


# # print(f"{chr_list[i]} : {strand[t]} : {chr_dict[rd.choice(chr_list)]}")


# my_dict = {'A': {
#     'long_name' : 'Alanine',
#     'molecular_weight' : 89.1
# }}

# aminoCheck = input('Enter one letter code to know the details of the amino acid ').upper()
# longName = my_dict[aminoCheck]['long_name']
# molecularWeight = my_dict[aminoCheck]['molecular_weight']

# print(f'The amino acid is {longName} and it\'s molecular weight is {molecularWeight}')


gene_model = {'Gene':{
    'name' : 'Nanog',
    'description' : 'Nanog homeobox',
    'location' : {
        'Chromosome' : 12,
        'Start' : 7787794 ,
        'End' : 7799146,
        'Strand' : 'Forward',
    }
}}

transcripts = [{
    'name' : 'NANOG-201',
    'id': 'ENST00000229307.9',
    'length': 5182,
    'Amino_acids': 305,
},{
    'name' : 'NANOG-202',
    'id': 'ENST00000526286.1',
    'length': 870,
    'Amino_acids': 289,
},{
    'name' : 'NANOG-204',
    'id': 'ENST00000541267.5',
    'length': 836,
    'Amino_acids': 186
},{
    'name' : 'NANOG-203',
    'id': 'ENST00000526434.2',
    'length': 558,
    'Amino_acids': 0
}]

print(transcripts[3]['length'])


# list1 = ("Npepl1", "Rab13", "Reg4", "Asb17", "Clcnka", "Nup62", "Upf3a", "Kcnn1", "Ccdc151", "Arg1", "Tmem98", "Mtx3", "Isl1", "Fam53c" )
# list2 = ("Kcnj2", "Rab13", "Reg4","Nol6", "Masp2", "Clcnka", "Upf3a", "Kcnn1", "Arg1", "Krt75", "Smpd3", "Mtx3", "Trim8", "Fam53c")
# list3 = []
# for item in list1:
#     for secItem in list2:
#         if item == secItem:
#             list3.append(item)
# list3.sort()
# for i in range(len(list3)):
#     print(f'{i+1}. {list3[i]}')




# for i in range(1800):
#     if mt.fabs(mt.sin(i)) < 0.01:
#         print(i)


# my_list = ['E23A', 'P12S', 'W88Y','R32N']
# my_dict = {'E23A': 0, 'P12S': 0, 'W88Y': 0, 'R32N': 0}
# count = 0
# while True:
#     t = input('Variant: ').upper()
#     if t in my_list:
#         my_dict[t]+=1
#     elif len(t) != 0:
#         count+=1
#         print('Invalid input')
#     else:
#         break



# print(f"You had {my_dict['E23A']} counts for E23A\n{my_dict['P12S']} counts for P12S")
# print(f"{my_dict['W88Y']} counts for W88Y\n{my_dict['R32N']} counts for R32N")
# print(f"You also had {count} inputs being unknown variants")
