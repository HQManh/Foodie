// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$MatchesForwardCore
// address: 0x741c8dc
// body: available
// range: 0x741c8dc-0x741cc4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741cb94 to 0x741cc50 Mono.Globalization.Unicode.SimpleCollator$$MatchesPrimitive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x741cc4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Globalization_Unicode_SimpleCollator__MatchesForwardCore
                (ulong param_1,long param_2,int *param_3,int param_4,undefined4 param_5,
                char *param_6,uint param_7,int param_8,long *param_9,uint *param_10)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined4 local_64;
  
  uVar6 = param_1;
  if ((DAT_09520f69 & 1) == 0) {
    uVar6 = FUN_03f5c2a4(&DAT_09187d38);
    DAT_09520f69 = 1;
  }
  uVar5 = *param_10;
  pcVar10 = *(char **)(param_10 + 6);
  local_64 = 0;
  if (param_8 == 0) {
    lVar8 = Mono_Globalization_Unicode_SimpleCollator__GetContraction
                      (param_1,param_2,*param_3,param_4);
    *param_9 = lVar8;
    uVar6 = thunk_FUN_03f5d7b8(param_9,lVar8);
LAB_0741c99c:
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)param_10[10] < 0) {
      pcVar10 = *(char **)(param_10 + 0xc);
      if (pcVar10 == (char *)0x0) {
        uVar5 = 0;
        *param_3 = *param_3 + 1;
        goto LAB_0741cbe4;
      }
      goto LAB_0741c99c;
    }
    uVar6 = Mono_Globalization_Unicode_SimpleCollator__FilterExtender
                      (param_1,param_10[10],param_8,uVar5);
    uVar9 = uVar6 & 0xffffffff;
  }
  lVar8 = *param_9;
  if (lVar8 == 0) {
    if ((int)uVar9 < 0) {
      if (param_2 == 0) goto LAB_0741cc4c;
      uVar4 = System_String__get_Chars(param_2,*param_3,0);
      uVar9 = Mono_Globalization_Unicode_SimpleCollator__FilterOptions(param_1,uVar4,uVar5);
      uVar9 = uVar9 & 0xffffffff;
    }
    *param_3 = *param_3 + 1;
    cVar1 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar9);
    *pcVar10 = cVar1;
    cVar3 = *param_6;
    if (cVar3 == cVar1) {
      cVar2 = Mono_Globalization_Unicode_SimpleCollator__Level1(param_1,uVar9);
      pcVar10[1] = cVar2;
    }
    if ((uVar5 >> 1 & 1) == 0) {
      if (param_6[1] == pcVar10[1]) {
        cVar2 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar9,param_8);
        pcVar10[2] = cVar2;
joined_r0x0741ca9c:
        if (cVar3 == cVar1) {
          if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Mono_Globalization_Unicode_MSCompatUnicodeTable__Level3(uVar9);
          pcVar10[3] = (char)uVar6;
          if (*pcVar10 != '\x01') {
            param_10[10] = (uint)uVar9;
          }
          goto LAB_0741cad8;
        }
      }
    }
    else if ((uVar5 >> 1 & 1) != 0) goto joined_r0x0741ca9c;
    iVar7 = *param_3;
    if (iVar7 < param_4) {
      if (param_2 == 0) {
LAB_0741cc4c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      do {
        uVar4 = System_String__get_Chars(param_2,iVar7,0);
        cVar3 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar4);
        if (cVar3 != '\x01') break;
        iVar7 = *param_3 + 1;
        *param_3 = iVar7;
      } while (iVar7 < param_4);
    }
  }
  else {
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_0741cc4c;
    *param_3 = *param_3 + *(int *)(*(long *)(lVar8 + 0x18) + 0x18);
    if ((param_7 & 1) != 0) {
      if (*(long *)(lVar8 + 0x28) == 0) {
        lVar8 = *(long *)(lVar8 + 0x20);
        local_64 = 0;
        if (lVar8 == 0) goto LAB_0741cc4c;
        uVar5 = Mono_Globalization_Unicode_SimpleCollator__MatchesForward
                          (param_1,lVar8,&local_64,*(undefined4 *)(lVar8 + 0x10),param_5,param_6,1,
                           param_10);
        goto LAB_0741cbe4;
      }
      lVar8 = 0;
      do {
        pcVar10[lVar8] = param_6[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *(char **)(param_10 + 0xc) = pcVar10;
      param_10[10] = 0xffffffff;
LAB_0741cad8:
      iVar7 = *param_3;
      if (iVar7 < param_4) {
        if (param_2 == 0) goto LAB_0741cc4c;
        do {
          uVar4 = System_String__get_Chars(param_2,iVar7,0);
          uVar6 = Mono_Globalization_Unicode_SimpleCollator__Category(param_1,uVar4);
          if (((uint)uVar6 & 0xff) != 1) break;
          if ((uVar5 >> 1 & 1) == 0) {
            cVar3 = pcVar10[2];
            if (cVar3 == '\0') {
              cVar3 = '\x02';
              pcVar10[2] = '\x02';
            }
            uVar4 = System_String__get_Chars(param_2,*param_3,0);
            uVar6 = Mono_Globalization_Unicode_SimpleCollator__Level2(param_1,uVar4,0);
            pcVar10[2] = (char)uVar6 + cVar3;
          }
          iVar7 = *param_3 + 1;
          *param_3 = iVar7;
        } while (iVar7 < param_4);
      }
      uVar6 = Mono_Globalization_Unicode_SimpleCollator__MatchesPrimitive
                        (uVar6,uVar5,pcVar10,uVar9,param_8,param_6,param_5,param_7 & 1);
      return uVar6;
    }
  }
  uVar5 = 0;
LAB_0741cbe4:
  return (ulong)(uVar5 & 1);
}

