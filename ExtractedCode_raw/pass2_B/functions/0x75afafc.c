// rea decompile_all
// name: System.Guid$$CompareTo
// address: 0x75afafc
// body: available
// range: 0x75afafc-0x75afbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Guid__CompareTo(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar5 = (uint)param_3;
  bVar2 = (uint)param_2 <= *param_1;
  if (*param_1 != (uint)param_2) goto LAB_075afbc0;
  uVar6 = (int)((ulong)param_2 >> 0x10) >> 0x10;
  bVar3 = (uint)(int)(short)param_1[1] <= uVar6;
  bVar2 = false;
  if (uVar6 == (int)(short)param_1[1]) {
    uVar6 = (uint)((long)param_2 >> 0x30);
    bVar3 = (uint)(int)*(short *)((long)param_1 + 6) <= uVar6;
    bVar2 = false;
    if (uVar6 == (int)*(short *)((long)param_1 + 6)) {
      bVar2 = (uVar5 & 0xff) <= (uint)(byte)param_1[2];
      if ((((uint)(byte)param_1[2] == (uVar5 & 0xff)) &&
          (uVar6 = uVar5 >> 8 & 0xff, bVar2 = uVar6 <= *(byte *)((long)param_1 + 9),
          *(byte *)((long)param_1 + 9) == uVar6)) &&
         (uVar6 = uVar5 >> 0x10 & 0xff, bVar2 = uVar6 <= *(byte *)((long)param_1 + 10),
         *(byte *)((long)param_1 + 10) == uVar6)) {
        bVar3 = (uint)*(byte *)((long)param_1 + 0xb) <= uVar5 >> 0x18;
        bVar2 = uVar5 >> 0x18 == (uint)*(byte *)((long)param_1 + 0xb);
        if (!bVar2) goto LAB_075afbb0;
        uVar6 = (uint)(byte)param_1[3];
        uVar5 = uVar4;
        if ((uint)(byte)param_1[3] == (uVar4 & 0xff)) {
          uVar5 = uVar4 >> 8;
          uVar6 = (uint)*(byte *)((long)param_1 + 0xd);
          if ((uint)*(byte *)((long)param_1 + 0xd) == (uVar5 & 0xff)) {
            uVar5 = uVar4 >> 0x10;
            uVar6 = (uint)*(byte *)((long)param_1 + 0xe);
            if ((uint)*(byte *)((long)param_1 + 0xe) == (uVar5 & 0xff)) {
              bVar3 = (uint)*(byte *)((long)param_1 + 0xf) <= uVar4 >> 0x18;
              bVar2 = false;
              if (uVar4 >> 0x18 == (uint)*(byte *)((long)param_1 + 0xf)) {
                return 0;
              }
              goto LAB_075afbb0;
            }
          }
        }
        bVar2 = (uVar5 & 0xff) <= uVar6;
      }
LAB_075afbc0:
      uVar1 = 1;
      if (!bVar2) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
  }
LAB_075afbb0:
  uVar1 = 1;
  if (bVar3 && !bVar2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

