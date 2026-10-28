// rea decompile_all
// name: FUN_03f8d45c
// address: 0x3f8d45c
// body: available
// range: 0x3f8d45c-0x3f8d6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * FUN_03f8d45c(basic_string *param_1,int param_2,int param_3,int param_4,uint param_5,
                  undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint __oflag;
  uint uVar8;
  basic_string *pbVar9;
  stat local_e0;
  
  __oflag = 2;
  if (param_3 != 3) {
    __oflag = (uint)(param_3 == 2);
  }
  if (param_2 < 4) {
    if (param_2 == 1) {
      __oflag = __oflag | 0xc0;
    }
    else if (param_2 == 2) {
      __oflag = __oflag | 0x240;
    }
    else if (param_2 != 3) {
LAB_03f8d4e8:
      __oflag = 0;
    }
  }
  else {
    if (param_2 != 4) {
      if (param_2 == 5) {
        __oflag = __oflag | 0x200;
        goto LAB_03f8d500;
      }
      if (param_2 != 6) goto LAB_03f8d4e8;
    }
    __oflag = __oflag | 0x40;
  }
LAB_03f8d500:
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  uVar8 = 0x1b6;
  if ((param_5 & 1) != 0) {
    uVar8 = 0x180;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  iVar1 = open((char *)pbVar9,__oflag,(ulong)uVar8);
  if (iVar1 == -1) {
    piVar6 = (int *)__errno();
    iVar1 = *piVar6;
    if (iVar1 == 0x15) {
      pbVar9 = param_1 + 1;
      if (((byte)*param_1 & 1) != 0) {
        pbVar9 = *(basic_string **)(param_1 + 0x10);
      }
      iVar1 = open((char *)pbVar9,__oflag & 0x3fc,(ulong)uVar8);
      if (iVar1 != -1) goto LAB_03f8d538;
      iVar1 = *piVar6;
    }
    uVar3 = FUN_03f899d4(param_1,iVar1);
    *param_6 = uVar3;
  }
  else {
LAB_03f8d538:
    iVar2 = fstat(iVar1,&local_e0);
    if (iVar2 == -1) {
      puVar7 = (undefined4 *)__errno();
      uVar3 = FUN_03f89920(*puVar7);
      *param_6 = uVar3;
    }
    else {
      uVar4 = FUN_03f8d3a8(&local_e0,param_4,param_3);
      if ((uVar4 & 1) != 0) {
        piVar5 = operator_new(0x50);
        *piVar5 = iVar1;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        *(undefined8 *)((long)piVar5 + 0x25) = 0;
        *(undefined8 *)((long)piVar5 + 0x1d) = 0;
        piVar5[0xe] = 0;
        piVar5[0xf] = 0;
        piVar5[0xc] = 0;
        piVar5[0xd] = 0;
        piVar5[0x12] = 0;
        piVar5[0x13] = 0;
        piVar5[0x10] = 0;
        piVar5[0x11] = 0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(piVar5 + 2),param_1);
        piVar5[9] = param_4;
        piVar5[10] = param_3;
        piVar5[8] = param_5;
        *(__ino_t *)(piVar5 + 0xe) = local_e0.st_ino;
        *(__dev_t *)(piVar5 + 0xc) = local_e0.st_dev;
        FUN_03f5d894(local_e0.__unused + 2,&DAT_09534ac8);
        piVar6 = piVar5;
        if (DAT_09534b18 != (int *)0x0) {
          *(int **)((long)DAT_09534cc0 + 0x48) = piVar5;
          *(int **)(piVar5 + 0x10) = DAT_09534cc0;
          piVar6 = DAT_09534b18;
        }
        DAT_09534b18 = piVar6;
        DAT_09534cc0 = piVar5;
        FUN_03f5d920(local_e0.__unused + 2);
        *param_6 = 0;
        iVar1 = 1;
        if (((uint)local_e0.st_nlink & 0xf000) == 0x2000) {
          iVar1 = 2;
        }
        iVar2 = 3;
        if (((uint)local_e0.st_nlink & 0xf000) != 0x1000) {
          iVar2 = iVar1;
        }
        piVar5[1] = iVar2;
        return piVar5;
      }
      *param_6 = 0x20;
    }
    close(iVar1);
  }
  return (int *)0xffffffffffffffff;
}

