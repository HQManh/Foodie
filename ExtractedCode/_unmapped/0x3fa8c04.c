// rea decompile_all
// name: FUN_03fa8c04
// address: 0x3fa8c04
// body: available
// range: 0x3fa8c04-0x3fa8d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa8c04(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_b8 [8];
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 auStack_70 [8];
  undefined *local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  if ((*(ushort *)(*param_1 + 0x135) >> 0xc & 1) != 0) {
    FUN_03f5d894(auStack_70,&DAT_09535138);
    local_60 = param_1[2];
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    FUN_03fa4e1c(auStack_b8,&DAT_09535188,&local_68);
    local_28 = 0;
    local_68 = &DAT_09535188;
    local_60 = DAT_095351c8;
    local_58 = DAT_095351d0;
    local_50 = DAT_095351d0;
    local_48 = 0;
    lStack_40 = DAT_095351c8;
    local_38 = DAT_095351d0;
    lStack_30 = DAT_095351d0;
    FUN_03f6054c(&local_68);
    if (((((local_b0 != local_60) || (local_a8 != local_58)) || (local_a0 != local_50)) ||
        ((local_a0 != local_a8 && (local_98 != local_48)))) &&
       ((plVar2 = (long *)FUN_03f5dff4(*(undefined8 *)(local_98 + 0x10)), plVar2 == (long *)0x0 ||
        (plVar2 == param_1)))) {
      memcpy(&local_68,auStack_b8,0x48);
      FUN_03faa518(&DAT_09535188,&local_68);
    }
    FUN_03f5d920(auStack_70);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 0x14)) {
    plVar2 = param_1 + 4;
    do {
      (**(code **)(*(long *)*plVar2 + 0x10))();
      uVar3 = uVar3 - 1;
      plVar2 = plVar2 + 2;
    } while (uVar3 != 0);
  }
  uVar1 = *(uint *)((long)param_1 + 0xa4);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(param_1[0x13] + lVar4 + 8) + 0x10))();
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar4 != 0);
    free((void *)param_1[0x13]);
  }
  return;
}

