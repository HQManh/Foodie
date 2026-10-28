// rea decompile_all
// name: CakeOrder.DataSO.CakeOrderDatabaseSO$$GetCharacterSOsByMap
// address: 0x426995c
// body: available
// range: 0x426995c-0x4269b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4269b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4269b18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_DataSO_CakeOrderDatabaseSO__GetCharacterSOsByMap(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_09516fd2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab788);
    FUN_03f5c2a4(&DAT_091ab778);
    FUN_03f5c2a4(&DAT_0917bdc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fd2 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917bdc8);
  FUN_057e0400(lVar3,DAT_091ab778);
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar5 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar9 + 0x20 + uVar10 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar7,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar7 == 0) goto LAB_04269b14;
          uVar8 = *(undefined8 *)(lVar7 + 0x40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(lVar7 + 0x40) == 0) goto LAB_04269b14;
            uVar5 = System_String__op_Equality
                              (*(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x18),param_2,0);
            lVar2 = DAT_091ab788;
            if ((uVar5 & 1) != 0) {
              if (lVar3 == 0) goto LAB_04269b14;
              lVar6 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_04269b14;
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar7;
                thunk_FUN_03f5d7b8(plVar4,lVar7);
              }
              else {
                FUN_057e0c68(lVar3,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return lVar3;
  }
LAB_04269b14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

