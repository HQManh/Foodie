// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaGenerator$$GenerateObjectSchema
// address: 0x76d0690
// body: available
// range: 0x76d0690-0x76d0abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d0a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0aa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0ab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d0abc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d0a60) */
/* WARNING: Removing unreachable block (ram,0x076d0ab8) */

void Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateObjectSchema
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  if ((DAT_0952274f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4b8);
    FUN_03f5c2a4(&DAT_0919fac8);
    FUN_03f5c2a4(&DAT_09176b58);
    FUN_03f5c2a4(&DAT_0917a1e8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917aca0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b7168);
    FUN_03f5c2a4(&DAT_091b6ce0);
    FUN_03f5c2a4(&DAT_091b7170);
    DAT_0952274f = 1;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  uVar3 = thunk_FUN_03f9944c(DAT_09176b58);
  FUN_06fd76bc(uVar3,DAT_0919fac8);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)(lVar9 + 0xb8);
    *puVar10 = uVar3;
    thunk_FUN_03f5d7b8(puVar10,uVar3);
    if ((param_3 != 0) && (*(long *)(param_3 + 0xd8) != 0)) {
      plVar4 = (long *)FUN_06c779c4(*(long *)(param_3 + 0xd8),DAT_0919b4b8);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d0828;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_076d0828:
        uVar7 = (*(code *)*puVar10)(plVar4,puVar10[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_076d0a54;
          lVar9 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 == 0) goto LAB_076d0a2c;
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_076d0a14;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917aca0) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d088c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917aca0,0);
LAB_076d088c:
        lVar9 = (*(code *)*puVar10)(plVar4,puVar10[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar9 + 0x80) == '\0') {
          if (((*(ulong *)(lVar9 + 0x88) >> 0x20 == 1 && (*(ulong *)(lVar9 + 0x88) & 0xff) != 0) ||
              ((*(byte *)(lVar9 + 0x94) & 1) != 0)) || (*(long *)(lVar9 + 0xb0) != 0)) {
            bVar1 = true;
          }
          else {
            bVar1 = *(long *)(lVar9 + 0xc0) != 0;
          }
          uVar3 = *(undefined8 *)(lVar9 + 0x40);
          uVar2 = Newtonsoft_Json_Serialization_JsonProperty__get_Required(lVar9,0);
          lVar5 = Newtonsoft_Json_Schema_JsonSchemaGenerator__GenerateInternal
                            (param_1,uVar3,uVar2,bVar1 ^ 1);
          lVar6 = Newtonsoft_Json_Serialization_JsonProperty__get_DefaultValue(lVar9,0);
          if (lVar6 != 0) {
            uVar3 = Newtonsoft_Json_Serialization_JsonProperty__get_DefaultValue(lVar9,0);
            if (*(int *)(DAT_09187250 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = Newtonsoft_Json_Linq_JToken__FromObject(uVar3,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined8 *)(lVar5 + 0xf0) = uVar3;
            thunk_FUN_03f5d7b8();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar11 = *(long **)(*(long *)(param_1 + 0x30) + 0xb8);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar11;
          uVar3 = *(undefined8 *)(lVar9 + 0x30);
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a1e8) {
                puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                goto LAB_076d09b0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a1e8,5);
LAB_076d09b0:
          (*(code *)*puVar10)(plVar11,uVar3,lVar5,puVar10[1]);
        }
      } while( true );
    }
  }
LAB_076d0ab4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076d0a14:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076d0a48;
    }
  }
LAB_076d0a2c:
  puVar10 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_076d0a48:
  (*(code *)*puVar10)(plVar4,puVar10[1]);
LAB_076d0a54:
  uVar7 = Newtonsoft_Json_Utilities_TypeExtensions__IsSealed(param_2,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_076d0ab4;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 0;
  }
  return;
}

