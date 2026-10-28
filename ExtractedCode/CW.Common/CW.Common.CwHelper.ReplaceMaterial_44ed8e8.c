// rea decompile_all
// name: CW.Common.CwHelper$$ReplaceMaterial
// address: 0x44ed8e8
// body: available
// range: 0x44ed8e8-0x44edc6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44edc48 to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44edc68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44edc6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwHelper__ReplaceMaterial(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  if ((DAT_095183f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091ae608);
    FUN_03f5c2a4(&DAT_091ae618);
    FUN_03f5c2a4(&DAT_091ae628);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095183f3 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
    if ((uVar3 & 1) != 0) {
      if ((param_1 != 0) &&
         (lVar4 = UnityEngine_Renderer__GetSharedMaterialArray(param_1,0), lVar4 != 0)) {
        uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar12 = 0;
          do {
            if (uVar3 <= uVar12) goto LAB_044edc6c;
            uVar10 = *(undefined8 *)(lVar4 + 0x20 + uVar12 * 8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Equality(uVar10,param_2,0);
            if ((uVar3 & 1) != 0) {
              return;
            }
            uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        if (0 < (int)uVar3) {
          uVar12 = 0;
          do {
            if (uVar3 <= uVar12) {
LAB_044edc6c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar11 = *(long *)(lVar4 + 0x20 + uVar12 * 8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Inequality(lVar11,0,0);
            if ((uVar3 & 1) != 0) {
              if ((lVar11 == 0) ||
                 (uVar10 = UnityEngine_Material__get_shader(lVar11,0), param_2 == 0))
              goto LAB_044edc68;
              uVar5 = UnityEngine_Material__get_shader(param_2,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar3 = UnityEngine_Object__op_Inequality(uVar10,uVar5,0);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(DAT_09183140 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar9 = DAT_091ae608;
                lVar6 = *(long *)(*(long *)(DAT_09183140 + 0xb8) + 0x48);
                if (lVar6 == 0) goto LAB_044edc68;
                lVar7 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_044edc68;
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar8 = lVar11;
                  thunk_FUN_03f5d7b8(plVar8,lVar11);
                }
                else {
                  FUN_057e0c68(lVar6,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        if (*(int *)(DAT_09183140 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = DAT_091ae608;
        lVar11 = *(long *)(*(long *)(DAT_09183140 + 0xb8) + 0x48);
        if (lVar11 != 0) {
          lVar9 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              plVar8 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar8 = param_2;
              thunk_FUN_03f5d7b8(plVar8,param_2);
            }
            else {
              FUN_057e0c68(lVar11,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = *(long *)(*(long *)(DAT_09183140 + 0xb8) + 0x48);
            if (lVar4 != 0) {
              uVar10 = FUN_057e28a4(lVar4,DAT_091ae628);
              UnityEngine_Renderer__SetMaterialArray(param_1,uVar10,0);
              lVar4 = *(long *)(*(long *)(DAT_09183140 + 0xb8) + 0x48);
              if (lVar4 != 0) {
                iVar1 = *(int *)(lVar4 + 0x18);
                *(undefined4 *)(lVar4 + 0x18) = 0;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (iVar1 < 1) {
                  return;
                }
                System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
                return;
              }
            }
          }
        }
      }
LAB_044edc68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

