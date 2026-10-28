// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$ProcessRuns
// address: 0x42e16ec
// body: available
// range: 0x42e16ec-0x42e18ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e18a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e18a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ArabicShaper__ProcessRuns
               (long param_1,int param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  
  if ((DAT_09517436 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    DAT_09517436 = 1;
  }
  iVar5 = (int)param_3;
  if (0 < iVar5) {
    if (param_4 == 0) {
LAB_042e18a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = 0;
    do {
      if (*(uint *)(param_4 + 0x18) <= uVar7) {
LAB_042e18a4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      pcVar8 = (char *)(param_4 + (int)uVar7 + 0x20);
      cVar1 = *pcVar8;
      if ((byte)(cVar1 - 1U) < 2) {
        uVar6 = (ulong)uVar7;
        if ((int)uVar7 < iVar5) {
          uVar6 = (ulong)(int)uVar7;
          do {
            if (*(uint *)(param_4 + 0x18) <= (uint)uVar6) goto LAB_042e18a4;
            cVar2 = *(char *)(param_4 + uVar6 + 0x20);
            if (cVar2 != cVar1) {
              if ((cVar2 != '\x04') || ((long)(param_3 & 0xffffffff) <= (long)(uVar6 + 1)))
              goto LAB_042e17f4;
              if (*(int *)(DAT_09181520 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = CakeOrder_Localization_ArabicShaper__RunContinues
                                (param_4,uVar6 & 0xffffffff,cVar1);
              if ((uVar4 & 1) == 0) goto LAB_042e17f4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != (param_3 & 0xffffffff));
          uVar6 = param_3 & 0xffffffff;
        }
LAB_042e17f4:
        if (*(int *)(DAT_09181520 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CakeOrder_Localization_ArabicShaper__AppendReversed
                  (param_1,uVar7 + param_2,(int)uVar6 + param_2,param_5);
        uVar7 = (int)uVar6 - 1;
      }
      else {
        if (param_1 == 0) goto LAB_042e18a8;
        uVar3 = System_String__get_Chars(param_1,uVar7 + param_2,0);
        if (*(uint *)(param_4 + 0x18) <= uVar7) goto LAB_042e18a4;
        if (*pcVar8 == '\0') {
          if (*(int *)(DAT_09181520 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_Localization_ArabicShaper__Mirror(uVar3);
        }
        if (param_5 == 0) goto LAB_042e18a8;
        System_Text_StringBuilder__Append(param_5,uVar3,0);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

