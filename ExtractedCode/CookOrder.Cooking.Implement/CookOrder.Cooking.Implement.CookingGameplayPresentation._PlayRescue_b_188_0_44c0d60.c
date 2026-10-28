// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$<PlayRescue>b__188_0
// address: 0x44c0d60
// body: available
// range: 0x44c0d60-0x44c0ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c0dcc to 0x4380444 CakeOrder.InGame.InGameBackgroundsControl$$ChangeTintColorAll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c0dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__<PlayRescue>b__188_0
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(long *)(param_2 + 0x2d8) != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x2d8) + 0x30);
    if (lVar1 == 0) {
      return;
    }
    if ((*(long *)(param_2 + 0x2e8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_2 + 0x2e8) + 0x58), lVar2 != 0)) {
      auVar7 = NEON_fmov(0xbf800000,4);
      fVar4 = 1.0;
      if (param_1 <= 1.0) {
        fVar4 = param_1;
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      fVar5 = 0.0;
      if (0.0 <= param_1) {
        fVar5 = fVar4;
      }
      auVar6 = NEON_fmov(0x3f800000,4);
      fVar4 = ((float)((ulong)uVar3 >> 0x20) + auVar7._4_4_) * fVar5 + auVar6._4_4_;
      CakeOrder_InGame_InGameBackgroundsControl__ChangeTintColorAll
                (CONCAT44(fVar4,((float)uVar3 + auVar7._0_4_) * fVar5 + auVar6._0_4_),fVar4,lVar1,0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

