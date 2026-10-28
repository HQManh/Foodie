// rea decompile_all
// name: CookingGraph.Execution.CookingFlightCoordinator$$.ctor
// address: 0x44a1e2c
// body: available
// range: 0x44a1e2c-0x44a20af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a20a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a20ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingFlightCoordinator___ctor
               (long param_1,long param_2,long param_3,ulong param_4,double param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  if ((DAT_095181f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e4e0);
    FUN_03f5c2a4(&DAT_0919e5c0);
    FUN_03f5c2a4(&DAT_09176708);
    FUN_03f5c2a4(&DAT_091766e8);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b8e28);
    FUN_03f5c2a4(&DAT_0917e3b8);
    FUN_03f5c2a4(&DAT_09223f00);
    DAT_095181f7 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09176708);
  FUN_06f52618(uVar1,DAT_0919e5c0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917e3b8);
  FUN_05e2ca0c(uVar1,DAT_091b8e28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091766e8);
  FUN_06f52618(uVar1,DAT_0919e4e0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar1);
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_0921b2e8;
  }
  else {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
    if (param_3 != 0) {
      *(long *)(param_1 + 0x18) = param_3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),param_3);
      dVar4 = param_5;
      if ((param_4 & 0xff) == 0) {
        if (*(long *)(param_2 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(param_5);
        }
        dVar4 = *(double *)(*(long *)(param_2 + 0x88) + 0x48);
      }
      CookingGraph_Execution_CookingExecution__RequireTime(dVar4,DAT_09223f00);
      if ((param_5 != 0.0) || ((param_4 & 0xff) == 0)) {
        *(ulong *)(param_1 + 0x58) = param_4;
        *(double *)(param_1 + 0x60) = param_5;
        uVar1 = *(undefined8 *)(param_2 + 0x70);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x78);
        *(undefined8 *)(param_1 + 0x38) = uVar1;
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar1 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09223f00);
      System_ArgumentOutOfRangeException___ctor(uVar1,uVar3,0);
      goto LAB_044a2094;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09220ff0;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentNullException___ctor(uVar1,uVar3,0);
LAB_044a2094:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c64f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar3);
}

