// rea decompile_all
// name: CakeOrder.Shop.UIGoldPackMaterialByShopId$$Apply
// address: 0x43697fc
// body: available
// range: 0x43697fc-0x43697ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIGoldPackMaterialByShopId__Apply(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09517889 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517889 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40));
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
          return;
        }
        uVar1 = 0;
        uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar5 + 0x20 + uVar1 * 8);
          if (lVar6 != 0) {
            if (*(long *)(param_1 + 0x38) == 0) break;
            uVar3 = System_String__op_Inequality
                              (*(undefined8 *)(lVar6 + 0x10),
                               *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88),0);
            if ((uVar3 & 1) == 0) {
              uVar4 = *(undefined8 *)(param_1 + 0x20);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
              if ((uVar1 & 1) != 0) {
                uVar4 = *(undefined8 *)(lVar6 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
                if ((uVar1 & 1) != 0) {
                  plVar2 = *(long **)(param_1 + 0x20);
                  if (plVar2 == (long *)0x0) break;
                  (**(code **)(*plVar2 + 0x348))
                            (plVar2,*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(*plVar2 + 0x350));
                }
              }
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
              if ((uVar1 & 1) == 0) {
                return;
              }
              uVar4 = *(undefined8 *)(lVar6 + 0x20);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
              if ((uVar1 & 1) == 0) {
                return;
              }
              plVar2 = *(long **)(param_1 + 0x28);
              if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x043699d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar2 + 0x348))
                          (plVar2,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(*plVar2 + 0x350));
                return;
              }
              break;
            }
          }
          uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar1 = uVar1 + 1;
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar1) {
            return;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

