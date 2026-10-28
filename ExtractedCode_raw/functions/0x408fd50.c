// rea decompile_all
// name: TrungKienPack.Particle.ParticleRequest$$.ctor
// address: 0x408fd50
// body: available
// range: 0x408fd50-0x408fe2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408fe2c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_ParticleRequest___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  thunk_FUN_03f5d7b8();
  param_1[1] = param_3;
  thunk_FUN_03f5d7b8(param_1 + 1,param_3);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  cVar1 = DAT_09515ed5;
  uVar3 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  param_1[2] = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  *(undefined4 *)(param_1 + 3) = uVar3;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  uVar2 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
  uVar4 = **(undefined8 **)(DAT_091898c0 + 0xb8);
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = uVar2;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
  thunk_FUN_03f5d7b8(param_1 + 6,0);
  uVar4 = NEON_fmov(0x3f800000,4);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar4;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03f5d7b8(param_1 + 0xb,0);
  return;
}

