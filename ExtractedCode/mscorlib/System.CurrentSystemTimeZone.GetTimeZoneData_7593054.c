// rea decompile_all
// name: System.CurrentSystemTimeZone$$GetTimeZoneData
// address: 0x7593054
// body: available
// range: 0x7593054-0x7593057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint System_CurrentSystemTimeZone__GetTimeZoneData
               (undefined4 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  byte abStack_90 [16];
  ulong uStack_80;
  byte abStack_78 [16];
  undefined8 auStack_68 [5];
  
  abStack_78[0] = 0;
  abStack_78[1] = 0;
  abStack_78[2] = 0;
  abStack_78[3] = 0;
  abStack_78[4] = 0;
  abStack_78[5] = 0;
  abStack_78[6] = 0;
  abStack_78[7] = 0;
  uStack_80 = 0;
  auStack_68[0] = 0;
  abStack_78[8] = 0;
  abStack_78[9] = 0;
  abStack_78[10] = 0;
  abStack_78[0xb] = 0;
  abStack_78[0xc] = 0;
  abStack_78[0xd] = 0;
  abStack_78[0xe] = 0;
  abStack_78[0xf] = 0;
  auStack_68[2] = 0;
  auStack_68[1] = 0;
  auStack_68[4] = 0;
  auStack_68[3] = 0;
  abStack_90[8] = 0;
  abStack_90[9] = 0;
  abStack_90[10] = 0;
  abStack_90[0xb] = 0;
  abStack_90[0xc] = 0;
  abStack_90[0xd] = 0;
  abStack_90[0xe] = 0;
  abStack_90[0xf] = 0;
  abStack_90[0] = 0;
  abStack_90[1] = 0;
  abStack_90[2] = 0;
  abStack_90[3] = 0;
  abStack_90[4] = 0;
  abStack_90[5] = 0;
  abStack_90[6] = 0;
  abStack_90[7] = 0;
  if (param_2 == (long *)0x0) {
    pcVar5 = "data";
  }
  else {
    if (param_3 != (long *)0x0) {
      uVar4 = FUN_03f984c8(DAT_09535440,4);
      FUN_03f5ef9c(param_2,uVar4);
      uVar4 = FUN_03f984c8(DAT_09535468,2);
      FUN_03f5ef9c(param_3,uVar4);
      uVar3 = FUN_03f8f59c(param_1,auStack_68 + 1,abStack_90,param_4);
      if ((uVar3 & 1) != 0) {
        lVar9 = *param_2;
        lVar7 = 0;
        do {
          *(undefined8 *)(lVar9 + 0x20 + lVar7) = *(undefined8 *)((long)auStack_68 + lVar7 + 8U);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x20);
        lVar7 = 0;
        bVar2 = true;
        do {
          bVar6 = bVar2;
          lVar9 = *param_3;
          uVar1 = (ulong)(abStack_90 + lVar7 * 0x18) | 1;
          if ((abStack_90[lVar7 * 0x18] & 1) != 0) {
            uVar1 = (&uStack_80)[lVar7 * 3];
          }
          uVar4 = FUN_03f967b4(uVar1);
          puVar8 = (undefined8 *)(lVar9 + lVar7 * 8 + 0x20);
          *puVar8 = uVar4;
          FUN_03f5d7b8(puVar8);
          lVar7 = 1;
          bVar2 = false;
        } while (bVar6);
      }
      lVar7 = 0;
      do {
        if ((abStack_78[lVar7] & 1) != 0) {
          operator_delete(*(void **)((long)auStack_68 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
      return uVar3 & 1;
    }
    pcVar5 = "names";
  }
  uVar4 = FUN_03fa6794(pcVar5);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar4,0);
}

