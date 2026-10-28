// rea decompile_all
// name: Coffee.UIParticleInternal.CanvasExtensions$$GetViewProjectionMatrix
// address: 0x43faeec
// body: available
// range: 0x43faeec-0x43fb057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIParticleInternal_CanvasExtensions__GetViewProjectionMatrix
               (undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09517e34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd070);
    FUN_03f5c2a4(&DAT_091cd080);
    FUN_03f5c2a4(&DAT_09184990);
    FUN_03f5c2a4(&DAT_09203690);
    DAT_09517e34 = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(int *)(DAT_09184990 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04b77a08(param_1,DAT_09203690,param_3,DAT_091cd080);
  if ((uVar1 & 1) == 0) {
    Coffee_UIParticleInternal_CanvasExtensions__GetViewProjectionMatrix
              (param_1,param_2,&local_c0,&local_100);
    uStack_178 = uStack_b8;
    local_180 = local_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    local_160 = local_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_1b8 = uStack_f8;
    local_1c0 = local_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    local_1a0 = local_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    FUN_04125f68(&local_140,&local_180,&local_1c0,0);
    param_3[5] = uStack_118;
    param_3[4] = local_120;
    param_3[7] = uStack_108;
    param_3[6] = uStack_110;
    param_3[1] = uStack_138;
    *param_3 = local_140;
    param_3[3] = uStack_128;
    param_3[2] = uStack_130;
    if (*(int *)(DAT_09184990 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_78 = uStack_138;
    local_80 = local_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_58 = uStack_118;
    local_60 = local_120;
    uStack_48 = uStack_108;
    uStack_50 = uStack_110;
    FUN_04b77490(param_1,DAT_09203690,&local_80,DAT_091cd070);
  }
  return;
}

