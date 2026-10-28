// rea decompile_all
// name: TrungKienPack.Particle.ParticleRequest$$SetColor
// address: 0x4090874
// body: available
// range: 0x4090874-0x4090933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_ParticleRequest__SetColor
               (void *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09515d0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b77a0);
    DAT_09515d0b = 1;
  }
  uStack_68 = param_3[1];
  local_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_48 = param_3[5];
  local_50 = param_3[4];
  local_40 = param_3[6];
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_05c3f5e0(&local_b0,&local_70,DAT_091b77a0);
  *(undefined8 *)((long)param_2 + 0x50) = uStack_a8;
  *(undefined8 *)((long)param_2 + 0x48) = local_b0;
  *(undefined8 *)((long)param_2 + 0x60) = uStack_98;
  *(undefined8 *)((long)param_2 + 0x58) = uStack_a0;
  *(undefined8 *)((long)param_2 + 0x70) = uStack_88;
  *(undefined8 *)((long)param_2 + 0x68) = local_90;
  *(undefined8 *)((long)param_2 + 0x80) = uStack_78;
  *(undefined8 *)((long)param_2 + 0x78) = uStack_80;
  thunk_FUN_03f5d7b8((long)param_2 + 0x58,0);
  memcpy(param_1,param_2,0x88);
  return;
}

