// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$BuildSpec
// address: 0x41d8630
// body: available
// range: 0x41d8630-0x41d8753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderStrategy__BuildSpec(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516a94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a94 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar1 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_3);
    lVar3 = (**(code **)(*param_2 + 600))(param_2,param_3,*(undefined8 *)(*param_2 + 0x260));
    if (lVar3 == 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
    }
    else {
      puVar4 = (undefined8 *)(lVar3 + 0x10);
    }
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    local_60 = puVar4[2];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    local_50 = local_70;
    uStack_48 = uStack_68;
    local_40 = local_60;
    AnhPD_FoodOrder_OrderSpec___ctor
              (param_1,param_3,uVar2,&local_70,lVar3 != 0,0,0xffffffff,0xffffffff,0);
  }
  else {
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  return;
}

