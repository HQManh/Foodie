// rea decompile_all
// name: CakeOrder.Home.SingleHomeMapDataCache$$.ctor
// address: 0x433b894
// body: available
// range: 0x433b894-0x433bba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433bba0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433bba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_SingleHomeMapDataCache___ctor
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_0951771d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091ba258);
    FUN_03f5c2a4(&DAT_091ba208);
    FUN_03f5c2a4(&DAT_091ba218);
    FUN_03f5c2a4(&DAT_091ba1b8);
    FUN_03f5c2a4(&DAT_091ba238);
    FUN_03f5c2a4(&DAT_091ba1e0);
    FUN_03f5c2a4(&DAT_0917e6f8);
    FUN_03f5c2a4(&DAT_0917e6d0);
    FUN_03f5c2a4(&DAT_0917e6e8);
    FUN_03f5c2a4(&DAT_0917e6f0);
    FUN_03f5c2a4(&DAT_0917e6e0);
    FUN_03f5c2a4(&DAT_0917e6d8);
    DAT_0951771d = 1;
  }
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_2);
  lVar1 = DAT_091b4b60;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  lVar1 = *(long *)(lVar1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(**(long **)(lVar1 + 0xb8),param_2,0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6e8);
    FUN_060da42c(uVar2,0,param_2,param_4,param_5,DAT_091ba218);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6f8);
    FUN_060da42c(uVar2,1,param_2,param_4,param_5,DAT_091ba258);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6f0);
    FUN_060da42c(uVar2,2,param_2,param_4,param_5,DAT_091ba238);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6e0);
    FUN_060da42c(uVar2,3,param_2,param_4,param_5,DAT_091ba208);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6d8);
    FUN_060da42c(uVar2,6,param_2,param_4,param_5,DAT_091ba1e0);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917e6d0);
    FUN_060da42c(uVar2,7,param_2,param_4,param_5,DAT_091ba1b8);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

