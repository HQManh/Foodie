// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$TryGetVfxGradient
// address: 0x41114f4
// body: available
// range: 0x41114f4-0x411160b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 AnhPD_FoodOrder_DragItem__TryGetVfxGradient(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_095161ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b77a8);
    FUN_03f5c2a4(&DAT_091b77a0);
    FUN_03f5c2a4(&DAT_091b77b0);
    DAT_095161ff = 1;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0xe8) = 1;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
      TrungKienPack_Particle_ParticleColor__BuildRandomColorGradient(&local_98,lVar1,0);
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_58 = uStack_90;
      local_60 = local_98;
      uStack_48 = uStack_80;
      uStack_50 = local_88;
      uStack_38 = uStack_70;
      local_40 = local_78;
      local_30 = local_68;
      FUN_05c3f5e0(&local_e0,&local_60,DAT_091b77a0);
      *(undefined8 *)(param_1 + 0xb0) = uStack_d8;
      *(undefined8 *)(param_1 + 0xa8) = local_e0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_c8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_d0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_b8;
      *(undefined8 *)(param_1 + 200) = local_c0;
      *(undefined8 *)(param_1 + 0xe0) = uStack_a8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_b0;
      thunk_FUN_03f5d7b8(param_1 + 0xb8,0);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  param_2[6] = *(undefined8 *)(param_1 + 0xe0);
  param_2[3] = uVar7;
  param_2[2] = uVar6;
  param_2[5] = uVar3;
  param_2[4] = uVar2;
  param_2[1] = uVar5;
  *param_2 = uVar4;
  thunk_FUN_03f5d7b8(param_2 + 1,0);
  return *(undefined1 *)(param_1 + 0xa8);
}

