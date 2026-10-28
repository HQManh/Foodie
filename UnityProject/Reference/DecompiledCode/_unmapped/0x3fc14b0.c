// rea decompile_all
// name: FUN_03fc14b0
// address: 0x3fc14b0
// body: available
// range: 0x3fc14b0-0x3fc164f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fc14b0(undefined8 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint local_48 [2];
  undefined8 *local_40;
  void *local_38;
  undefined1 auStack_30 [8];
  undefined8 *local_28;
  
  local_48[0] = 0;
  local_40 = param_1;
  uVar5 = FUN_03fc2a54(&DAT_095358b0,local_48,&local_28);
  if (((uVar5 & 1) == 0) || (puVar6 = local_28, local_28 == (undefined8 *)0x0)) {
    FUN_03f5d894(auStack_30,&DAT_09535730);
    local_48[0] = 0;
    local_40 = param_1;
    bVar4 = FUN_03fc2a54(&DAT_095358b0,local_48,&local_28);
    puVar6 = local_28;
    if ((bVar4 & local_28 != (undefined8 *)0x0) == 0) {
      puVar6 = (undefined8 *)FUN_03fa7f34(1,0x138);
      puVar6[0xf] = puVar6;
      puVar6[3] = param_1[3];
      FUN_03f92510(local_48,&DAT_01a542f6,param_1[2]);
      pvVar2 = (void *)((ulong)local_48 | 1);
      if ((local_48[0] & 1) != 0) {
        pvVar2 = local_38;
      }
      uVar7 = FUN_03f92a28(pvVar2);
      puVar6[2] = uVar7;
      if ((local_48[0] & 1) != 0) {
        operator_delete(local_38);
      }
      puVar1 = (ushort *)((long)puVar6 + 0x135);
      *puVar6 = *param_1;
      uVar3 = *(uint *)(param_1 + 0x23);
      *(undefined1 *)((long)puVar6 + 0x2a) = 0xf;
      puVar6[4] = param_1 + 4;
      puVar6[6] = param_1 + 4;
      *puVar1 = *puVar1 | 0x100;
      puVar6[0x1f] = 0x800000008;
      *(uint *)(puVar6 + 7) = *(uint *)(puVar6 + 7) & 0xff0fffff | 0x200f0000;
      *(uint *)(puVar6 + 0x23) = uVar3 & 7;
      puVar6[0xb] = 0;
      *(undefined1 *)(puVar6 + 0x26) = 1;
      puVar6[8] = param_1;
      puVar6[9] = param_1;
      DataMemoryBarrier(2,3);
      local_48[0] = 0;
      *puVar1 = *puVar1 & 0xffbe | 2 | (ushort)(puVar6[0x1b] == 0);
      local_40 = param_1;
      local_28 = puVar6;
      FUN_03fc2cf0(&DAT_095358b0,local_48,&local_28);
    }
    FUN_03f5d920(auStack_30);
  }
  return puVar6;
}

