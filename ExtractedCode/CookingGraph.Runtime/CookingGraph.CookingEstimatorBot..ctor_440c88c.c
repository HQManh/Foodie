// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$.ctor
// address: 0x440c88c
// body: available
// range: 0x440c88c-0x440cadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440cad4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x440cad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot___ctor
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  if ((DAT_09517edd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d5e0);
    FUN_03f5c2a4(&DAT_091763f0);
    FUN_03f5c2a4(&DAT_09184168);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091b23b0);
    FUN_03f5c2a4(&DAT_0917d228);
    DAT_09517edd = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917d228);
  FUN_057e0400(uVar1,DAT_091b23b0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = DAT_09179e18;
  *(undefined8 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x5c) = 0xff800000ff800000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_053d6e00(uVar1,DAT_091a8298);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091763f0);
  FUN_06eef750(uVar1,DAT_0919d5e0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar1);
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09223360;
  }
  else {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
    if (param_3 != 0) {
      *(long *)(param_1 + 0x18) = param_3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),param_3);
      if (param_4 == 0) {
        param_4 = thunk_FUN_03f9944c(DAT_09184168);
        CookingGraph_EstimatorBotSettings___ctor();
      }
      plVar4 = (long *)(param_1 + 0x20);
      *plVar4 = param_4;
      thunk_FUN_03f5d7b8(plVar4,param_4);
      *(undefined8 *)(param_1 + 0x78) = param_5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),param_5);
      if (*plVar4 != 0) {
        uVar5 = CookingGraph_CookingEstimatorBot__ClampIntelligent(*(undefined4 *)(*plVar4 + 0x10));
        *(undefined4 *)(param_1 + 0xac) = uVar5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09219618;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentNullException___ctor(uVar1,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c63f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar3);
}

