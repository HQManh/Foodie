// rea decompile_all
// name: AFMiniJSON.Json.Parser$$ParseString
// address: 0x405474c
// body: available
// range: 0x405474c-0x40549c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40549c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40549c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AFMiniJSON_Json_Parser__ParseString(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((DAT_09515b31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09515b31 = 1;
  }
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar6,0);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    plVar7 = *(long **)(param_1 + 0x10);
    while (plVar7 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      if (iVar4 == -1) {
LAB_04054998:
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040549bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return;
        }
        break;
      }
      uVar5 = AFMiniJSON_Json_Parser__get_NextChar(param_1);
      if ((uVar5 & 0xffff) != 0x5c) {
        if ((uVar5 & 0xffff) == 0x22) goto LAB_04054998;
joined_r0x04054968:
        if (plVar6 != (long *)0x0) goto LAB_04054878;
        break;
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) break;
      iVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      if (iVar4 == -1) goto LAB_04054998;
      uVar5 = AFMiniJSON_Json_Parser__get_NextChar(param_1);
      uVar2 = uVar5 & 0xffff;
      if (uVar2 < 0x5d) {
        if ((uVar2 - 0x22 < 0x3b) &&
           ((1L << ((ulong)(uVar2 - 0x22) & 0x3f) & 0x400000000002001U) != 0))
        goto joined_r0x04054968;
      }
      else {
        if (uVar2 < 0x67) {
          if ((uVar5 & 0xffff) == 0x62) {
            if (plVar6 == (long *)0x0) break;
            uVar5 = 8;
          }
          else {
            if ((uVar5 & 0xffff) != 0x66) goto LAB_04054884;
            if (plVar6 == (long *)0x0) break;
            uVar5 = 0xc;
          }
        }
        else {
          uVar5 = uVar5 & 0xffff;
          if (uVar5 < 0x74) {
            if (uVar5 == 0x6e) {
              if (plVar6 == (long *)0x0) break;
              uVar5 = 10;
            }
            else {
              if (uVar5 != 0x72) goto LAB_04054884;
              if (plVar6 == (long *)0x0) break;
              uVar5 = 0xd;
            }
          }
          else {
            if (uVar5 != 0x74) {
              if (uVar5 == 0x75) {
                lVar8 = FUN_03f5c394(DAT_0917fcc8,4);
                uVar10 = 0;
                do {
                  uVar3 = AFMiniJSON_Json_Parser__get_NextChar(param_1);
                  if (lVar8 == 0) goto LAB_040549c0;
                  if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar1 = uVar10 * 2;
                  uVar10 = uVar10 + 1;
                  *(undefined2 *)(lVar8 + lVar1 + 0x20) = uVar3;
                } while (uVar10 != 4);
                uVar9 = System_String__CreateString(0,lVar8,0);
                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09182b88);
                }
                uVar5 = System_Convert__ToInt32(uVar9,0x10,0);
                goto joined_r0x04054968;
              }
              goto LAB_04054884;
            }
            if (plVar6 == (long *)0x0) break;
            uVar5 = 9;
          }
        }
LAB_04054878:
        System_Text_StringBuilder__Append(plVar6,uVar5,0);
      }
LAB_04054884:
      plVar7 = *(long **)(param_1 + 0x10);
    }
  }
LAB_040549c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

