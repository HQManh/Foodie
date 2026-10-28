// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$GetImmutableConstructor
// address: 0x76a2e5c
// body: available
// range: 0x76a2e5c-0x76a310f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a3108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a310c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_DefaultContractResolver__GetImmutableConstructor
                 (undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_09522623 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a3d8);
    FUN_03f5c2a4(&DAT_0917aa80);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09522623 = 1;
  }
  if ((param_2 != 0) &&
     (plVar1 = (long *)System_Type__GetConstructors(param_2,0), plVar1 != (long *)0x0)) {
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a3d8) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076a2f18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a3d8,0);
LAB_076a2f18:
    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar1 != (long *)0x0) {
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076a2f80;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_076a2f80:
      uVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917aa80) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076a2fe4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917aa80,0);
LAB_076a2fe4:
        plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
        lVar7 = *plVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076a3040;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_076a3040:
        uVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        if ((uVar8 & 1) == 0) {
          if ((plVar3 != (long *)0x0) &&
             (lVar7 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260)),
             lVar7 != 0)) {
            uVar8 = *(ulong *)(lVar7 + 0x18);
            if (uVar8 == 0) {
              return (long *)0x0;
            }
            if ((int)uVar8 < 1) {
              return plVar3;
            }
            lVar10 = 0;
            while( true ) {
              if ((uint)uVar8 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar1 = *(long **)(lVar7 + 0x20 + lVar10 * 8);
              if (plVar1 == (long *)0x0) break;
              uVar4 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
              uVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
              lVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__MatchProperty
                                (uVar5,param_3,uVar4,uVar5);
              if (lVar6 == 0) {
                return (long *)0x0;
              }
              if (*(char *)(lVar6 + 0x82) != '\0') {
                return (long *)0x0;
              }
              uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
              lVar10 = lVar10 + 1;
              if ((int)*(uint *)(lVar7 + 0x18) <= (int)lVar10) {
                return plVar3;
              }
            }
          }
          goto LAB_076a3108;
        }
      }
      return (long *)0x0;
    }
  }
LAB_076a3108:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

