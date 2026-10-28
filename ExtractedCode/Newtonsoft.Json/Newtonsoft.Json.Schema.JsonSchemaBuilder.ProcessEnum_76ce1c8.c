// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$ProcessEnum
// address: 0x76ce1c8
// body: available
// range: 0x76ce1c8-0x76ce5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ce504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce50c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce518 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce5d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ce5d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076ce5d4) */

void Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessEnum(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_58;
  long **pplStack_50;
  long *local_48;
  
  if ((DAT_0952273b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adfa8);
    FUN_03f5c2a4(&DAT_0917c598);
    DAT_0952273b = 1;
  }
  local_48 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    if (iVar1 != 2) {
      FUN_039b1d98(param_2);
      uVar3 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_2);
      uVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      local_58 = CONCAT44(local_58._4_4_,uVar2);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09187268);
      uVar5 = FUN_03f5c42c(uVar5,&local_58);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09201d30);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
      uVar3 = Newtonsoft_Json_JsonException__Create(param_2,uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d19d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    lVar10 = *(long *)(param_1 + 0x28);
    uVar3 = thunk_FUN_03f9944c(DAT_0917c598);
    FUN_057e0400(uVar3,DAT_091adfa8);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)(lVar10 + 0xe0);
      *puVar11 = uVar3;
      thunk_FUN_03f5d7b8(puVar11,uVar3);
      lVar10 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076ce300;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5d0,0);
LAB_076ce300:
      local_48 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
      pplStack_50 = &local_48;
      local_58 = 0;
      do {
        plVar9 = local_48;
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_48;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076ce38c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_076ce38c:
        uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        plVar9 = local_48;
        if ((uVar7 & 1) == 0) {
          if (local_48 == (long *)0x0) {
            return;
          }
          lVar10 = *local_48;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 == 0) goto LAB_076ce4c0;
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_076ce4a8;
        }
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_48;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076ce3f0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917ac98,0);
LAB_076ce3f0:
        lVar10 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0xe0);
        uVar3 = Newtonsoft_Json_Linq_JToken__DeepClone(lVar10,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a0c0) {
              puVar11 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_076ce46c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a0c0,2);
LAB_076ce46c:
        (*(code *)*puVar11)(plVar9,uVar3,puVar11[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076ce4a8:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076ce4dc;
    }
  }
LAB_076ce4c0:
  puVar11 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_076ce4dc:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
  return;
}

