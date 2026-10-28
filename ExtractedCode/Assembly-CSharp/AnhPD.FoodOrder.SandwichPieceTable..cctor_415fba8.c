// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$.cctor
// address: 0x415fba8
// body: available
// range: 0x415fba8-0x415fd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415fd78 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichPieceTable___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((DAT_09516528 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a578);
    FUN_03f5c2a4(&DAT_091804d8);
    FUN_03f5c2a4(&DAT_091f3738);
    FUN_03f5c2a4(&DAT_091f3748);
    FUN_03f5c2a4(&DAT_091f3758);
    FUN_03f5c2a4(&DAT_091f3790);
    FUN_03f5c2a4(&DAT_091f3828);
    DAT_09516528 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_091804d8,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3828,0);
  **(undefined8 **)(DAT_0918a578 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918a578 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_091804d8,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3748,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_091804d8,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3738,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x18) =
       *(undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 8);
  thunk_FUN_03f5d7b8();
  uVar1 = FUN_03f5c394(DAT_091804d8,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3758,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = FUN_03f5c394(DAT_091804d8,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3790,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918a578 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  return;
}

