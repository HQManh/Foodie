// rea decompile_all
// name: FUN_03f7b068
// address: 0x3f7b068
// body: available
// range: 0x3f7b068-0x3f7b16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_03f7b068(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined4 local_30 [2];
  long *local_28;
  undefined8 *local_18;
  
  if (*param_1 == 0) {
    uVar1 = 0x58;
    if (DAT_095356c8 != 0) {
      uVar1 = 0x70;
    }
    local_18 = (undefined8 *)FUN_03fa7f34(1,uVar1);
    if (DAT_095356c8 != 0) {
      local_18[0xb] = FUN_03f7b1dc;
      local_18[0xc] = FUN_03f7b1dc;
      local_18[0xd] = FUN_03f7b1ec;
    }
    *local_18 = FUN_03f7b1dc;
    local_18[1] = FUN_03f7b1dc;
    local_18[2] = FUN_03f7b1ec;
  }
  else {
    local_30[0] = 0;
    local_28 = param_1;
    uVar2 = FUN_03f7b1fc(&DAT_09534730,local_30,&local_18);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_03fadea4(*param_1);
      if ((uVar2 & 1) == 0) {
        local_18 = (undefined8 *)FUN_03f7b2ec(param_1);
      }
      else {
        local_18 = (undefined8 *)&DAT_09534810;
        if ((DAT_09534863 >> 1 & 1) == 0) {
          memcpy(&DAT_09534810,(void *)*param_1,0x58);
          DAT_09534863 = DAT_09534863 | 2;
          auVar3 = *(undefined1 (*) [16])*param_1;
          auVar3 = NEON_ext(auVar3,auVar3,8,1);
          uRam0000000009534870 = auVar3._8_8_;
          _DAT_09534868 = auVar3._0_8_;
          DAT_09534820 = *(undefined8 *)((undefined1 (*) [16])*param_1)[1];
        }
      }
    }
  }
  return local_18;
}

