// rea decompile_all
// name: FUN_03fa7cbc
// address: 0x3fa7cbc
// body: available
// range: 0x3fa7cbc-0x3fa7e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa7cbc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_58;
  undefined8 local_48;
  
  plVar2 = (long *)FUN_03fc1774();
  for (plVar5 = (long *)**(undefined8 **)(param_1 + 0x10); plVar5 != (long *)0x0;
      plVar5 = (long *)plVar5[2]) {
    *plVar5 = (long)(plVar5 + 3);
  }
  uVar6 = plVar2[1];
  if ((uVar6 & 0x1fffffffffffffff) != 0) {
    puVar7 = (undefined8 *)*plVar2;
    puVar8 = puVar7;
    do {
      plVar5 = (long *)*puVar8;
      if (((plVar5 != (long *)0x0) && (*plVar5 != DAT_095353d8)) &&
         ((*(ushort *)((long)plVar5 + 0x135) >> 8 & 1) != 0)) {
        local_48 = 0;
        lVar3 = FUN_03fbec04(plVar5,&local_48);
        while (lVar3 != 0) {
          uVar6 = FUN_03fbb4e4(lVar3);
          if (((uVar6 & 1) != 0) && (uVar6 = FUN_03fa7ba0(lVar3), (uVar6 & 1) != 0)) {
            uVar6 = FUN_03fb84ac(*(undefined8 *)(lVar3 + 8));
            if ((uVar6 & 1) == 0) {
              local_58 = 0;
              FUN_03fbb370(lVar3,&local_58);
              if (local_58 != 0) {
                FUN_03fa7ae4(local_58,param_1);
              }
            }
            else {
              lVar9 = plVar5[0x17];
              iVar1 = *(int *)(lVar3 + 0x18);
              uVar6 = FUN_03fb8274(*(undefined8 *)(lVar3 + 8));
              if ((uVar6 & 1) == 0) {
                uVar4 = thunk_FUN_03fc3840();
              }
              else {
                uVar4 = *(undefined8 *)(**(long **)(lVar3 + 8) + 0x18);
              }
              FUN_03fa79c0(lVar9 + iVar1,1,uVar4,param_1);
            }
          }
          lVar3 = FUN_03fbec04(plVar5,&local_48);
        }
        puVar7 = (undefined8 *)*plVar2;
        uVar6 = plVar2[1];
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar7 + uVar6);
  }
  FUN_03fa763c(param_1);
  FUN_03fa7708(param_1);
  return;
}

