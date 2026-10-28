// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ParseEnum
// address: 0x7334198
// body: available
// range: 0x7334198-0x73343af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73343ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool IngameDebugConsole_DebugLogConsole__ParseEnum
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_64;
  
  if ((DAT_0952063f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_0952063f = 1;
  }
  local_64 = 0;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0x10) < 1;
    if (*(int *)(param_1 + 0x10) < 1) {
      uVar11 = 0;
    }
    else {
      iVar12 = 0;
      iVar10 = 0;
      uVar11 = 0;
      do {
        iVar4 = System_String__IndexOf(param_1,0x7c,iVar12,0);
        iVar5 = System_String__IndexOf(param_1,0x26,iVar12,0);
        if (iVar4 < 0) {
          iVar9 = iVar5;
          if (iVar5 < 0) {
            iVar9 = *(int *)(param_1 + 0x10);
          }
        }
        else {
          iVar2 = iVar5;
          if (iVar4 <= iVar5) {
            iVar2 = iVar4;
          }
          iVar9 = iVar4;
          if (-1 < iVar5) {
            iVar9 = iVar2;
          }
        }
        lVar6 = System_String__Substring(param_1,iVar12,iVar9 - iVar12,0);
        if (lVar6 == 0) goto LAB_073343ac;
        uVar7 = System_String__Trim(lVar6,0);
        uVar8 = System_Int32__TryParse(uVar7,&local_64,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Enum__Parse(param_2,uVar7,1,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_64 = System_Convert__ToInt32(uVar7,0);
        }
        uVar3 = local_64;
        iVar12 = iVar5;
        if (iVar10 == 0) {
joined_r0x07334310:
          uVar11 = uVar3;
          if (-1 < iVar4) goto LAB_07334314;
LAB_0733432c:
          if (iVar5 < 0) {
            iVar12 = *(int *)(param_1 + 0x10);
          }
          else {
            iVar10 = 2;
          }
        }
        else {
          if (iVar10 != 1) {
            uVar3 = local_64 & uVar11;
            goto joined_r0x07334310;
          }
          uVar11 = local_64 | uVar11;
          if (iVar4 < 0) goto LAB_0733432c;
LAB_07334314:
          if (iVar5 <= iVar4) {
            iVar12 = iVar4;
          }
          iVar10 = 1;
          if (iVar4 < iVar5) {
            iVar10 = 2;
          }
        }
        iVar12 = iVar12 + 1;
        bVar1 = *(int *)(param_1 + 0x10) <= iVar12;
      } while (iVar12 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_Enum__ToObject(param_2,uVar11,0);
    *param_3 = uVar7;
    thunk_FUN_03f5d7b8();
    return bVar1;
  }
LAB_073343ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

