// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$.ctor
// address: 0x4498044
// body: available
// range: 0x4498044-0x44983c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44983c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution___ctor(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_095181ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d58);
    FUN_03f5c2a4(&DAT_0919c870);
    FUN_03f5c2a4(&DAT_0919c848);
    FUN_03f5c2a4(&DAT_091760e8);
    FUN_03f5c2a4(&DAT_091760f0);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091abf30);
    FUN_03f5c2a4(&DAT_091b2460);
    FUN_03f5c2a4(&DAT_091b2420);
    FUN_03f5c2a4(&DAT_091b23d8);
    FUN_03f5c2a4(&DAT_0917d238);
    FUN_03f5c2a4(&DAT_0917d230);
    FUN_03f5c2a4(&DAT_0917bf28);
    FUN_03f5c2a4(&DAT_0917d240);
    DAT_095181ad = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_091760f0);
  FUN_06e8535c(uVar1,DAT_0919c870);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091760e8);
  FUN_06e8535c(uVar1,DAT_0919c848);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar1,DAT_091a82f8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar1,DAT_091a82f8);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar1,DAT_091a82f8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d230);
  FUN_057e0400(uVar1,DAT_091b23d8);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d240);
  FUN_057e0400(uVar1,DAT_091b2460);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d238);
  FUN_057e0400(uVar1,DAT_091b2420);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917bf28);
  FUN_0573bfb0(uVar1,DAT_091abf30);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar1);
  *(undefined8 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x58) = 1;
  auVar3 = System_Guid__NewGuid(0);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar3;
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    param_2 = thunk_FUN_03f9944c(DAT_09182d58);
    CookingGraph_Execution_CookingExecutionConfig___ctor
              (0x3fe0000000000000,0x3fa999999999999a,0,0x3f989374bc6a7efa,0x4024000000000000,
               0x3fb999999999999a,param_2,0,1,1,1,1,1,0,1,0,0,1,0,1,1,0);
  }
  plVar2 = (long *)(param_1 + 0x88);
  *plVar2 = param_2;
  thunk_FUN_03f5d7b8(plVar2,param_2);
  if (*plVar2 != 0) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*plVar2 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

