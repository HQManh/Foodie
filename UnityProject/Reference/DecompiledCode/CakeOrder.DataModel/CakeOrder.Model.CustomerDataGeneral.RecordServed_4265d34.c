// rea decompile_all
// name: CakeOrder.Model.CustomerDataGeneral$$RecordServed
// address: 0x4265d34
// body: available
// range: 0x4265d34-0x4265edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4265e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4265ed8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_Model_CustomerDataGeneral__RecordServed
               (undefined4 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  
  if ((DAT_09516fac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ac5e8);
    DAT_09516fac = 1;
  }
  lVar8 = DAT_091ac5e8;
  lVar4 = *(long *)(param_2 + 0x40);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar3 = *(uint *)(lVar4 + 0x18);
      if (uVar3 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar3 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        *puVar7 = param_3;
        thunk_FUN_03f5d7b8(puVar7,param_3);
      }
      else {
        FUN_057e0c68(lVar4,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar8 = *(long *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x48) = param_1;
      if (lVar8 != 0) {
        uVar11 = 0;
        do {
          uVar3 = *(uint *)(lVar8 + 0x18);
          if ((long)(int)uVar3 <= (long)uVar11) {
            *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
            goto LAB_04265eb8;
          }
          lVar4 = *(long *)(param_2 + 0x28);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_04265ed8;
          if (*(char *)(lVar4 + uVar11 + 0x20) == '\0') {
            if (uVar3 <= uVar11) {
LAB_04265ed8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
            if (lVar8 == 0) break;
            uVar5 = CakeOrder_Model_CustomerOrderData__IsMatchOrder(lVar8,param_3);
            if ((uVar5 & 1) != 0) {
              lVar8 = *(long *)(param_2 + 0x28);
              if (lVar8 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 <= (uint)uVar11) goto LAB_04265ed8;
                bVar9 = true;
                *(undefined1 *)(lVar8 + uVar11 + 0x20) = 1;
                if (((int)uVar2 < 1) || (bVar9 = false, *(char *)(lVar8 + 0x20) == '\0'))
                goto LAB_04265eb4;
                lVar4 = 0;
                goto LAB_04265e90;
              }
              break;
            }
            lVar8 = *(long *)(param_2 + 0x20);
          }
          uVar11 = uVar11 + 1;
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while (pcVar1 = (char *)(lVar8 + 0x21 + lVar4), lVar4 = lVar4 + 1, *pcVar1 != '\0') {
LAB_04265e90:
    iVar10 = (int)lVar4;
    if (uVar2 - 1 == iVar10) break;
  }
  bVar9 = (int)uVar2 <= iVar10 + 1;
LAB_04265eb4:
  *(bool *)(param_2 + 0x30) = bVar9;
LAB_04265eb8:
  return (long)uVar11 < (long)(int)uVar3;
}

