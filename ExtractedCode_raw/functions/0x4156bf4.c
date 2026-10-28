// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSandwich$$BuildRandomId
// address: 0x4156bf4
// body: available
// range: 0x4156bf4-0x4156cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSandwich__BuildRandomId(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095164d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178f80);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_095164d2 = 1;
  }
  lVar3 = param_1[0xf];
  uVar1 = *(undefined4 *)((long)param_1 + 0xfc);
  uVar2 = thunk_FUN_03f9944c(DAT_09178f80);
  FUN_05316834(uVar2,param_1,*(undefined8 *)(*param_1 + 0x310),0);
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_SandwichPieceTable__Roll(&local_58,uVar1,param_2,uVar2,0);
  uStack_68 = uStack_50;
  local_70 = local_58;
  local_60 = local_48;
  AnhPD_FoodOrder_FlexiblePieceId__Build(lVar3,&local_70,0);
  return;
}

