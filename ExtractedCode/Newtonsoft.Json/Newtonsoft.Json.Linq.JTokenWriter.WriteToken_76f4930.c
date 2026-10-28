// rea decompile_all
// name: Newtonsoft.Json.Linq.JTokenWriter$$WriteToken
// address: 0x76f4930
// body: available
// range: 0x76f4930-0x76f4c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f49d8 to 0x767fd38 Newtonsoft.Json.JsonWriter$$WriteToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f4c3c to 0x7646fdc Newtonsoft.Json.JsonReader$$Skip (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f4c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JTokenWriter__WriteToken
               (long param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_095228d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187210);
    FUN_03f5c2a4(&DAT_09187260);
    FUN_03f5c2a4(&DAT_09187278);
    DAT_095228d3 = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((((*(byte *)(DAT_09187260 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187260 + 0x130) * 8 + -8) ==
          DAT_09187260)) && ((param_3 & 1) != 0)) && (((param_4 & 1) != 0 && ((param_5 & 1) != 0))))
    {
      iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if ((iVar3 == 0) &&
         (uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290)),
         (uVar4 & 1) == 0)) {
        return;
      }
      plVar5 = (long *)param_2[0x12];
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,0,*(undefined8 *)(*plVar5 + 0x210));
        plVar9 = (long *)(param_1 + 0x68);
        plVar8 = (long *)*plVar9;
        if (plVar8 == (long *)0x0) {
          *(long *)(param_1 + 0x78) = (long)plVar5;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x78),plVar5);
          lVar2 = DAT_09187210;
          plVar8 = (long *)(param_1 + 0x60);
          if ((*plVar8 == 0) && (plVar9 = (long *)(param_1 + 0x70), *plVar9 == 0)) {
            if (plVar5 == (long *)0x0) {
              *plVar8 = 0;
              thunk_FUN_03f5d7b8(plVar8,0);
              plVar5 = (long *)0x0;
              *plVar9 = 0;
            }
            else {
              bVar1 = *(byte *)(DAT_09187210 + 0x130);
              if (*(byte *)(*plVar5 + 0x130) < bVar1) {
                plVar7 = (long *)0x0;
              }
              else {
                plVar7 = plVar5;
                if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09187210) {
                  plVar7 = (long *)0x0;
                }
              }
              *plVar8 = (long)plVar7;
              if (*(byte *)(*plVar5 + 0x130) < bVar1) {
                plVar7 = (long *)0x0;
              }
              else {
                plVar7 = plVar5;
                if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
                  plVar7 = (long *)0x0;
                }
              }
              thunk_FUN_03f5d7b8(plVar8,plVar7);
              lVar2 = DAT_09187278;
              bVar1 = *(byte *)(DAT_09187278 + 0x130);
              if (*(byte *)(*plVar5 + 0x130) < bVar1) {
                plVar8 = (long *)0x0;
              }
              else {
                plVar8 = plVar5;
                if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09187278) {
                  plVar8 = (long *)0x0;
                }
              }
              *plVar9 = (long)plVar8;
              if (*(byte *)(*plVar5 + 0x130) < bVar1) {
                plVar5 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
                plVar5 = (long *)0x0;
              }
            }
            thunk_FUN_03f5d7b8(plVar9,plVar5);
          }
          goto LAB_076f4c24;
        }
        (**(code **)(*plVar8 + 0x6e8))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x6f0));
        plVar5 = (long *)*plVar9;
        if (plVar5 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x288))(plVar5,*(undefined8 *)(*plVar5 + 0x290));
          *(undefined8 *)(param_1 + 0x78) = uVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar6);
          plVar5 = *(long **)(param_1 + 0x68);
          if (plVar5 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
            if (iVar3 == 4) {
              if (*plVar9 == 0) goto LAB_076f4c40;
              *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*plVar9 + 0x10);
              thunk_FUN_03f5d7b8(plVar9);
              Newtonsoft_Json_JsonWriter__InternalWriteValue(param_1,0xb,0);
            }
LAB_076f4c24:
            Newtonsoft_Json_JsonReader__Skip(param_2,0);
            return;
          }
        }
      }
LAB_076f4c40:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  Newtonsoft_Json_JsonWriter__WriteToken(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,0);
  return;
}

