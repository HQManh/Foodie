// rea decompile_all
// name: FUN_03f86048
// address: 0x3f86048
// body: available
// range: 0x3f86048-0x3f86307 inclusive
// range: 0x3f86338-0x3f86353 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8634c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f86350 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f86048(char *param_1,size_t param_2,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_3)

{
  byte *pbVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  char acStack_b0 [8];
  byte local_a8 [8];
  ulong local_a0;
  char *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char local_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_2 == 0) || (param_1[param_2] != '\0')) {
    pcVar11 = acStack_b0 + -(param_2 + 0x10 & 0xfffffffffffffff0);
    memcpy(pcVar11,param_1,param_2);
    pcVar11[param_2] = '\0';
    param_1 = pcVar11;
  }
  if (DAT_095349e0 != (code *)0x0) {
    param_1 = (char *)(*DAT_095349e0)(param_1);
  }
  if (*param_1 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar4 = uVar10 + 1;
      uVar10 = uVar10 + 1;
    } while (param_1[lVar4] != '\0');
  }
  FUN_03f5d894(&local_90,&DAT_09534990);
  pbVar6 = DAT_09534980;
  pbVar5 = DAT_09534978;
  pbVar1 = DAT_09534978;
  do {
    if (pbVar1 == pbVar6) {
      FUN_03f5d920(&local_90);
      local_5c[0] = '\x01';
      if (uVar10 == 0) {
        lStack_78 = 0;
        local_80 = (void *)0x0;
        local_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        lVar8 = thunk_FUN_03fe0404(&local_90,local_5c);
        if ((int)local_68 != 0) {
          uVar10 = (ulong)((byte)*param_3 >> 1);
          if (((byte)*param_3 & 1) != 0) {
            uVar10 = *(ulong *)(param_3 + 8);
          }
          if (uVar10 != 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (param_3," ");
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_3,"Unable to open program handle because of \'");
          FUN_03f916e4(local_a8,&local_90);
          uVar10 = (ulong)(local_a8[0] >> 1);
          pcVar11 = (char *)((ulong)local_a8 | 1);
          if ((local_a8[0] & 1) != 0) {
            uVar10 = local_a0;
            pcVar11 = local_98;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_3,pcVar11,uVar10);
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_3,"\'.");
        }
      }
      else {
        lVar8 = FUN_03f8dda4(param_1,uVar10,param_3);
      }
      if ((lVar8 != -100) && (local_5c[0] != '\0')) {
        FUN_03f5d894(local_a8,&DAT_09534990);
        FUN_03f6321c(&local_90,param_1);
        lStack_78 = lVar8;
        FUN_03f86354(&DAT_09534978,&local_90);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        lVar4 = -0x58;
LAB_03f862a4:
        FUN_03f5d920(&stack0xffffffffffffffb0 + lVar4);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return lVar8;
      }
LAB_03f86350:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (uVar10 == 0xffffffffffffffff) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        uVar9 = FUN_03f695e8(pbVar5);
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_0404c2dc(uVar9);
        }
      }
      goto LAB_03f86350;
    }
    uVar2 = *(ulong *)(pbVar1 + 8);
    __s1 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      __s1 = pbVar1 + 1;
      uVar2 = (ulong)(*pbVar1 >> 1);
    }
    __n = uVar2;
    if (uVar10 <= uVar2) {
      __n = uVar10;
    }
    iVar7 = memcmp(__s1,param_1,__n);
    if (iVar7 == 0 && uVar2 == uVar10) {
      lVar8 = *(long *)(pbVar1 + 0x18);
      lVar4 = -0x40;
      goto LAB_03f862a4;
    }
    pbVar1 = pbVar1 + 0x20;
  } while( true );
}

