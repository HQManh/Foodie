// rea decompile_all
// name: System.Text.Normalization$$DecomposeChar
// address: 0x745210c
// body: available
// range: 0x745210c-0x7452303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74522fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7452300 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Normalization__DecomposeChar
               (long *param_1,long *param_2,long param_3,int param_4,undefined4 param_5,int *param_6
               )

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((DAT_095210fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091888e0);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095210fc = 1;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (param_3 == 0) goto LAB_074522fc;
    iVar1 = *(int *)(param_3 + 0x10);
    lVar4 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(lVar4,iVar1 + 100,0);
    *param_1 = lVar4;
    thunk_FUN_03f5d7b8(param_1,lVar4);
    lVar4 = *param_1;
    if (lVar4 == 0) goto LAB_074522fc;
  }
  System_Text_StringBuilder__Append(lVar4,param_3,*param_6,param_4 - *param_6,0);
  if (*param_2 == 0) {
    lVar4 = FUN_03f5c394(DAT_091801b8,0x13);
    *param_2 = lVar4;
    thunk_FUN_03f5d7b8(param_2,lVar4);
  }
  if (param_3 != 0) {
    uVar2 = System_String__get_Chars(param_3,param_4,0);
    lVar4 = *param_2;
    if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091888e0);
    }
    uVar3 = System_Text_Normalization__GetCanonical(uVar2,lVar4,0,param_5);
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        lVar4 = *param_2;
        if (lVar4 == 0) goto LAB_074522fc;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_07452300:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *param_1;
        uVar6 = *(uint *)(lVar4 + uVar7 * 4 + 0x20);
        if ((int)uVar6 < 0xffff) {
          if (lVar5 == 0) goto LAB_074522fc;
        }
        else {
          if (lVar5 == 0) goto LAB_074522fc;
          System_Text_StringBuilder__Append(lVar5,uVar6 >> 10,0);
          lVar4 = *param_2;
          if (lVar4 == 0) goto LAB_074522fc;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_07452300;
          lVar5 = *param_1;
          if (lVar5 == 0) goto LAB_074522fc;
          uVar6 = (*(ushort *)(lVar4 + uVar7 * 4 + 0x20) & 0xfff) - 0x2400;
        }
        System_Text_StringBuilder__Append(lVar5,uVar6,0);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    *param_6 = param_4 + 1;
    return;
  }
LAB_074522fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

