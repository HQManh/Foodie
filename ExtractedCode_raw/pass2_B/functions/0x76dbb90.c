// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$CopyItemsTo
// address: 0x76dbb90
// body: available
// range: 0x76dbb90-0x76dbf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dbdbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dbe4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dbf30 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dbf34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dbf3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076dbf38) */

void Newtonsoft_Json_Linq_JContainer__CopyItemsTo(long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_095227b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095227b1 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar7,uVar5,0);
  }
  else if (param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092179f8);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09217a08);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar5,uVar6,0);
  }
  else {
    iVar1 = System_Array__get_Length(param_2,0);
    if ((param_3 == 0) || (param_3 < iVar1)) {
      iVar1 = Newtonsoft_Json_Linq_JContainer__get_Count(param_1);
      iVar2 = System_Array__get_Length(param_2,0);
      if (iVar1 <= iVar2 - param_3) {
        plVar3 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917a5d0) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_076dbcac;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a5d0,0);
LAB_076dbcac:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar3 != (long *)0x0) {
          iVar1 = 0;
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_076dbd2c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076dbd2c:
            uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar3 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_076dbe08;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_076dbdf0;
            }
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917ac98) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_076dbd90;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac98,0);
LAB_076dbd90:
            uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            System_Array__SetValue(param_2,uVar5,iVar1 + param_3,0);
            iVar1 = iVar1 + 1;
          } while (plVar3 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar8 = &DAT_0920f988;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar8 = &DAT_09217a00;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar8);
    System_ArgumentException___ctor(uVar7,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d1220);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_076dbdf0:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_076dbe24;
    }
  }
LAB_076dbe08:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076dbe24:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

