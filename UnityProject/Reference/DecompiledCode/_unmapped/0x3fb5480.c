// rea decompile_all
// name: FUN_03fb5480
// address: 0x3fb5480
// body: available
// range: 0x3fb5480-0x3fb55f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb5480(long param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 local_48;
  
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  pbVar6 = param_2 + 0x19;
  if ((param_2[0x18] & 1) != 0) {
    pbVar6 = *(byte **)(param_2 + 0x28);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar7 = 0;
    do {
      uVar1 = thunk_FUN_03fab57c(param_1,uVar7);
      uVar2 = FUN_03fb9e14(uVar1,pbVar5,param_3 & 1,pbVar6);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_03fc384c(uVar1);
        if (lVar3 != 0) goto LAB_03fb556c;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar7 = 0;
    do {
      uVar1 = thunk_FUN_03fab634(param_1,uVar7);
      uVar2 = FUN_03fb9e14(uVar1,pbVar5,param_3 & 1,pbVar6);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_03fc384c(uVar1);
        if (lVar3 == 0) {
          return 0;
        }
LAB_03fb556c:
        pbVar5 = *(byte **)(param_2 + 0xd0);
        if (pbVar5 == *(byte **)(param_2 + 0xd8)) {
          return lVar3;
        }
        do {
          pbVar6 = *(byte **)(pbVar5 + 0x10);
          local_48 = 0;
          if ((*pbVar5 & 1) == 0) {
            pbVar6 = pbVar5 + 1;
          }
          do {
            lVar4 = FUN_03fbf060(lVar3,&local_48);
            if (lVar4 == 0) {
              return 0;
            }
            uVar2 = FUN_03fb9e84(pbVar6,*(undefined8 *)(lVar4 + 0x10),param_3 & 1);
          } while ((uVar2 & 1) == 0);
          pbVar5 = pbVar5 + 0x18;
          lVar3 = lVar4;
        } while (pbVar5 != *(byte **)(param_2 + 0xd8));
        return lVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
  }
  return 0;
}

