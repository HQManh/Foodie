// rea decompile_all
// name: AnhPD.FoodOrder.ShelfSnapshot$$.ctor
// address: 0x40d7434
// body: available
// range: 0x40d7434-0x40d7697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d7694 to 0x75f9574 System.Object$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ShelfSnapshot___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0951601a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091aa8a0);
    FUN_03f5c2a4(&DAT_091af030);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_0917bad0);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951601a = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917bad0);
  FUN_0568f3ac(uVar1,DAT_091aa8a0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917bad0);
  FUN_0568f3ac(uVar1,DAT_091aa8a0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c8f0);
  FUN_057f7434(uVar1,DAT_091af030);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar1,DAT_091adc70);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar1,DAT_091adc70);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar1);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DAT_0917cce8;
  puVar2 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x48) = puVar2[2];
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b0558);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar1,DAT_091b0558);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar1);
  uVar1 = FUN_03f5c394(DAT_091801b8,8);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8();
  *(undefined1 *)(param_1 + 0x78) = 1;
  System_Object___ctor(param_1,0);
  return;
}

