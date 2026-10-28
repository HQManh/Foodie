// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$BuildStateArray
// address: 0x767e874
// body: available
// range: 0x767e874-0x767eaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767eae4 to 0x57e28a4 FUN_057e28a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x767eae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767eaec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__BuildStateArray(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if ((DAT_09522500 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091cb0c8);
    FUN_03f5c2a4(&DAT_091721c8);
    FUN_03f5c2a4(&DAT_09187490);
    FUN_03f5c2a4(&DAT_091aadb8);
    FUN_03f5c2a4(&DAT_091aadc0);
    FUN_03f5c2a4(&DAT_091aadc8);
    DAT_09522500 = 1;
  }
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_04b08b78(*(undefined8 *)(*(long *)(DAT_09187490 + 0xb8) + 8),DAT_091cb0c8);
  uVar3 = DAT_091721c8;
  lVar5 = *(long *)(*(long *)(DAT_09187490 + 0xb8) + 8);
  if (lVar5 != 0) {
    if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 8)) {
LAB_0767eaec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    uVar11 = *(undefined8 *)(lVar5 + 0x58);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091840e8);
    }
    lVar5 = Newtonsoft_Json_Utilities_EnumUtils__GetEnumValuesAndNames(uVar3,0);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar12 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          lVar7 = DAT_091aadb8;
          if (uVar6 <= uVar12) goto LAB_0767eaec;
          if (lVar2 == 0) goto LAB_0767eae8;
          uVar1 = *(uint *)(lVar2 + 0x18);
          iVar8 = (int)*(undefined8 *)(lVar5 + 0x20 + uVar12 * 8);
          if ((int)uVar1 <= iVar8) {
            if ((iVar8 - 7U < 6) || (iVar8 - 0x10U < 2)) {
              lVar9 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0767eae8;
              if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                lVar7 = *(long *)(lVar7 + 0x20);
                uVar3 = uVar11;
                goto LAB_0767ea54;
              }
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar4 = uVar11;
              uVar3 = uVar11;
            }
            else {
              lVar9 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0767eae8;
              if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                lVar7 = *(long *)(lVar7 + 0x20);
                uVar3 = uVar10;
LAB_0767ea54:
                FUN_057e0c68(lVar2,uVar3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
                goto LAB_0767ea60;
              }
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar4 = uVar10;
              uVar3 = uVar10;
            }
            thunk_FUN_03f5d7b8(puVar4,uVar3);
          }
LAB_0767ea60:
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      if (lVar2 != 0) {
        FUN_057e28a4(lVar2,DAT_091aadc0);
        return;
      }
    }
  }
LAB_0767eae8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

