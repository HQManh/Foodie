// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSauceStation$$IsManualResult
// address: 0x4080214
// body: available
// range: 0x4080214-0x4080357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408033c to 0x4ab6f28 FUN_04ab6f28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4080354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_Pasta_PastaSauceStation__IsManualResult(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09515c62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c94e0);
    FUN_03f5c2a4(&DAT_09178e58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ee3a8);
    FUN_03f5c2a4(&DAT_09193218);
    DAT_09515c62 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193218);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_2);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x80);
      uVar4 = thunk_FUN_03f9944c(DAT_09178e58);
      FUN_05322d94(uVar4,lVar1,DAT_091ee3a8,0);
      uVar4 = FUN_04ab6f28(uVar3,uVar4,DAT_091c94e0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

