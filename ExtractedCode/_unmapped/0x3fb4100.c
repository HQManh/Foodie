// rea decompile_all
// name: FUN_03fb4100
// address: 0x3fb4100
// body: available
// range: 0x3fb4100-0x3fb41b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb4100(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  
  uVar4 = FUN_03f92a28(*param_1);
  uVar5 = param_1[1];
  *param_2 = uVar4;
  uVar4 = FUN_03f92a28(uVar5);
  uVar5 = param_1[3];
  param_2[1] = uVar4;
  *(undefined8 *)((long)param_2 + 0x34) = uVar5;
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined8 *)((long)param_1 + 0x2c);
  uVar4 = *(undefined8 *)((long)param_1 + 0x24);
  param_2[3] = param_1[2];
  param_2[8] = CONCAT26((short)((ulong)uVar5 >> 0x20),
                        CONCAT24((short)uVar5,CONCAT22((short)((ulong)uVar4 >> 0x20),(short)uVar4)))
  ;
  if (*(char *)((long)param_1 + 0x34) != '\0') {
    lVar6 = 0;
    pbVar7 = (byte *)((long)param_2 + 0x21);
    do {
      bVar3 = *(byte *)((long)param_1 + lVar6 + 0x34);
      lVar6 = lVar6 + 1;
      bVar1 = bVar3 >> 4 | 0x30;
      if (0x9f < bVar3) {
        bVar1 = (bVar3 >> 4) + 0x57;
      }
      bVar2 = bVar3 & 0xf | 0x30;
      if (9 < (bVar3 & 0xf)) {
        bVar2 = (bVar3 & 0xf) + 0x57;
      }
      pbVar7[-1] = bVar1;
      *pbVar7 = bVar2;
      pbVar7 = pbVar7 + 2;
    } while (lVar6 != 8);
  }
  return;
}

