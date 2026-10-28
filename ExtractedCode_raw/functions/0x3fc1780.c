// rea decompile_all
// name: FUN_03fc1780
// address: 0x3fc1780
// body: available
// range: 0x3fc1780-0x3fc18e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc1780(long param_1,long param_2,ulong *param_3,long param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  do {
    if (param_1 == 0) {
      return;
    }
    if (*(short *)(param_1 + 0x124) != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x80) + lVar8;
        if ((*(ushort *)(*(long *)(lVar6 + 8) + 8) & 0x110) == 0) {
          iVar2 = *(int *)(lVar6 + 0x18);
          lVar5 = FUN_03fb81f4();
          uVar3 = *(uint *)(lVar5 + 8) >> 0x10;
          uVar4 = uVar3 & 0xff;
          if (uVar4 < 0x1f) {
            uVar1 = iVar2 + param_4;
            if ((1 << (ulong)(uVar3 & 0x1f) & 0x701c4000U) == 0) {
              if (uVar4 != 0x11) {
                if (uVar4 != 0x15) goto LAB_03fc1840;
                if (-1 < (int)*(uint *)(lVar5 + 8)) goto LAB_03fc1814;
              }
              lVar6 = FUN_03fbe574(*(undefined8 *)(lVar6 + 8),1);
              if (param_5 == 0) {
                FUN_03fbea4c(lVar6);
              }
              else {
                FUN_03fbffcc(lVar6);
              }
              if ((*(ushort *)(lVar6 + 0x135) >> 5 & 1) != 0) {
                FUN_03fc1780(lVar6,param_2,param_3,uVar1 - 0x10,param_5);
              }
            }
            else {
LAB_03fc1814:
              uVar7 = uVar1 >> 6 & 0x3fffffffffffff8;
              *(ulong *)(param_2 + uVar7) = *(ulong *)(param_2 + uVar7) | 1L << (uVar1 >> 3 & 0x3f);
              uVar7 = *param_3;
              if (*param_3 <= uVar1 >> 3) {
                uVar7 = uVar1 >> 3;
              }
              *param_3 = uVar7;
            }
          }
        }
LAB_03fc1840:
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar9 < *(ushort *)(param_1 + 0x124));
    }
    param_1 = *(long *)(param_1 + 0x58);
  } while( true );
}

