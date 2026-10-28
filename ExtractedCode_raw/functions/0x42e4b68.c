// rea decompile_all
// name: CakeOrder.Localization.DevanagariGlyphTable$$ReorderFallback
// address: 0x42e4b68
// body: available
// range: 0x42e4b68-0x42e4d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e4d28 to 0x742cd54 System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e4d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_DevanagariGlyphTable__ReorderFallback(undefined8 param_1)

{
  bool bVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_0951744b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab928);
    FUN_03f5c2a4(&DAT_091ab930);
    FUN_03f5c2a4(&DAT_091ab938);
    FUN_03f5c2a4(&DAT_091ab910);
    FUN_03f5c2a4(&DAT_091ab940);
    FUN_03f5c2a4(&DAT_091ab948);
    FUN_03f5c2a4(&DAT_0917be18);
    DAT_0951744b = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917be18);
  FUN_0572b9c4(lVar3,param_1,DAT_091ab910);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (1 < *(int *)(lVar3 + 0x18)) {
    iVar5 = 1;
    do {
      sVar2 = FUN_0572be20(lVar3,iVar5,DAT_091ab948);
      if (sVar2 == 0x93f) {
        iVar7 = iVar5 + -1;
        sVar2 = FUN_0572be20(lVar3,iVar7,DAT_091ab948);
        if (sVar2 == 0x93c && iVar7 != 0) {
          iVar7 = iVar5 + -2;
        }
        iVar6 = iVar7;
        if (1 < iVar7) {
          do {
            sVar2 = FUN_0572be20(lVar3,iVar7 + -1,DAT_091ab948);
            iVar6 = iVar7;
            if (sVar2 != 0x94d) break;
            iVar6 = iVar7 + -2;
            bVar1 = 3 < iVar7;
            iVar7 = iVar6;
          } while (bVar1);
        }
        FUN_0572d97c(lVar3,iVar5,DAT_091ab930);
        FUN_0572cfa4(lVar3,iVar6,0x93f,DAT_091ab928);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar3 + 0x18));
  }
  uVar4 = FUN_0572dcb8(lVar3,DAT_091ab938);
  System_String__CreateString(0,uVar4,0);
  return;
}

