// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo
// address: 0x76e1b3c
// body: available
// range: 0x76e1b3c-0x76e1f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e1d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1e18 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1e28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1f0c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e1f18 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076e1f14) */

void Newtonsoft_Json_Linq_JObject__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<System_String,Newtonsoft_Json_Linq_JToken>>_CopyTo
               (long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  
  if ((DAT_095227ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b460);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_091a9838);
    DAT_095227ea = 1;
  }
  local_58 = (long *)0x0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar6,uVar8,0);
  }
  else if (param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_092179f8);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09217a08);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar8,uVar5,0);
  }
  else {
    if ((param_3 == 0) || (param_3 < *(int *)(param_2 + 0x18))) {
      iVar2 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1);
      if (iVar2 <= *(int *)(param_2 + 0x18) - param_3) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_58 = (long *)FUN_06c779c4(*(long *)(param_1 + 0x58),DAT_0919b460);
        pplStack_60 = &local_58;
        local_68 = 0;
        if (local_58 != (long *)0x0) {
          iVar2 = 0;
          do {
            plVar4 = local_58;
            lVar9 = *local_58;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_076e1c90;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_076e1c90:
            uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            plVar4 = local_58;
            if ((uVar10 & 1) == 0) {
              if (local_58 == (long *)0x0) {
                return;
              }
              lVar9 = *local_58;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_076e1dd0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_076e1db8;
            }
            if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_58;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917ac98) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_076e1cf4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ac98,0);
LAB_076e1cf4:
            plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8
                         ) != DAT_09187230)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0();
            }
            if (plVar4[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_80 = 0;
            uStack_78 = 0;
            FUN_05614a80(&local_80,plVar4[0xc],*(undefined8 *)(plVar4[0xb] + 0x10),DAT_091a9838);
            uVar1 = iVar2 + param_3;
            if (*(uint *)(param_2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar9 = param_2 + (long)(int)uVar1 * 0x10;
            *(undefined8 *)(lVar9 + 0x28) = uStack_78;
            *(undefined8 *)(lVar9 + 0x20) = local_80;
            thunk_FUN_03f5d7b8(param_2 + 0x20 + (long)(int)uVar1 * 0x10,0);
            iVar2 = iVar2 + 1;
          } while (local_58 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      puVar7 = &DAT_0920f988;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      puVar7 = &DAT_09217a00;
    }
    uVar8 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentException___ctor(uVar6,uVar8,0);
  }
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d12b8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_076e1db8:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076e1dec;
    }
  }
LAB_076e1dd0:
  puVar3 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_076e1dec:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}

