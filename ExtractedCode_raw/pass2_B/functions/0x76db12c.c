// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$SetItem
// address: 0x76db12c
// body: available
// range: 0x76db12c-0x76db643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76db5b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76db640 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer__SetItem(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_095227af & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_0917b0b0);
    FUN_03f5c2a4(&DAT_09187940);
    FUN_03f5c2a4(&DAT_09188938);
    DAT_095227af = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  if (param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921d350);
    puVar7 = &DAT_09204958;
LAB_076db614:
    uVar8 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar8,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d1260);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (plVar2 != (long *)0x0) {
    lVar9 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_076db204;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076db204:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 <= param_2) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_0921d350);
      puVar7 = &DAT_09204950;
      goto LAB_076db614;
    }
    lVar9 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917b0b0) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_076db26c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076db26c:
    lVar9 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
    uVar12 = Newtonsoft_Json_Linq_JContainer__IsTokenUnchanged(lVar9,param_3);
    if ((uVar12 & 1) != 0) {
      return;
    }
    Newtonsoft_Json_Linq_JContainer__CheckReentrancy(param_1);
    lVar4 = Newtonsoft_Json_Linq_JContainer__EnsureParentToken(param_1,param_3,0,1);
    (**(code **)(*param_1 + 0x6d8))(param_1,lVar4,lVar9,*(undefined8 *)(*param_1 + 0x6e0));
    if (param_2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_076db324;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076db324:
      lVar10 = (*(code *)*puVar3)(plVar2,param_2 + -1,puVar3[1]);
    }
    lVar11 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_076db384;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076db384:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 + -1 == param_2) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_076db3f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076db3f0:
      lVar11 = (*(code *)*puVar3)(plVar2,param_2 + 1,puVar3[1]);
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = (long)param_1;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),param_1);
      *(long *)(lVar4 + 0x18) = lVar10;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),lVar10);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x20) = lVar4;
        thunk_FUN_03f5d7b8((long *)(lVar10 + 0x20),lVar4);
      }
      *(long *)(lVar4 + 0x20) = lVar11;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x20),lVar11);
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x18) = lVar4;
        thunk_FUN_03f5d7b8((long *)(lVar11 + 0x18),lVar4);
      }
      lVar10 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_076db4b0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,1);
LAB_076db4b0:
      (*(code *)*puVar3)(plVar2,param_2,lVar4,puVar3[1]);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x10),0);
        *(undefined8 *)(lVar9 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x18),0);
        *(undefined8 *)(lVar9 + 0x20) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x20),0);
        if (param_1[6] != 0) {
          uVar5 = thunk_FUN_03f9944c(DAT_09187940);
          System_ComponentModel_ListChangedEventArgs___ctor(uVar5,4,param_2,0);
          (**(code **)(*param_1 + 0x618))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x620));
        }
        if (param_1[8] == 0) {
          return;
        }
        uVar5 = thunk_FUN_03f9944c(DAT_09188938);
        System_Collections_Specialized_NotifyCollectionChangedEventArgs___ctor
                  (uVar5,2,lVar4,lVar9,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x076db598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x628))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x630));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

