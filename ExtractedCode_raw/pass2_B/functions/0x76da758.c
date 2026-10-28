// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$InsertItem
// address: 0x76da758
// body: available
// range: 0x76da758-0x76dab8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dab2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dab88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JContainer__InsertItem
          (long *param_1,int param_2,undefined8 param_3,uint param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_095227ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_0917b0b0);
    FUN_03f5c2a4(&DAT_09187940);
    FUN_03f5c2a4(&DAT_09188938);
    DAT_095227ac = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x5e8))(param_1,*(undefined8 *)(*param_1 + 0x5f0));
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076da834;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076da834:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 < param_2) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09204970);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d1230);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    Newtonsoft_Json_Linq_JContainer__CheckReentrancy(param_1);
    lVar7 = Newtonsoft_Json_Linq_JContainer__EnsureParentToken
                      (param_1,param_3,param_4 & 1,param_5 & 1);
    if (param_2 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076da8cc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076da8cc:
      lVar8 = (*(code *)*puVar3)(plVar2,param_2 + -1,puVar3[1]);
    }
    lVar9 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a0c0) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076da92c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a0c0,0);
LAB_076da92c:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 == param_2) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076da994;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,0);
LAB_076da994:
      lVar9 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
    }
    (**(code **)(*param_1 + 0x6d8))(param_1,lVar7,0,*(undefined8 *)(*param_1 + 0x6e0));
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = (long)param_1;
      thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),param_1);
      *(long *)(lVar7 + 0x18) = lVar8;
      thunk_FUN_03f5d7b8((long *)(lVar7 + 0x18),lVar8);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x20) = lVar7;
        thunk_FUN_03f5d7b8((long *)(lVar8 + 0x20),lVar7);
      }
      *(long *)(lVar7 + 0x20) = lVar9;
      thunk_FUN_03f5d7b8((long *)(lVar7 + 0x20),lVar9);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x18) = lVar7;
        thunk_FUN_03f5d7b8((long *)(lVar9 + 0x18),lVar7);
      }
      lVar8 = *plVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917b0b0) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_076daa70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b0b0,3);
LAB_076daa70:
      (*(code *)*puVar3)(plVar2,param_2,lVar7,puVar3[1]);
      if (param_1[6] != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09187940);
        System_ComponentModel_ListChangedEventArgs___ctor(uVar4,1,param_2,0);
        (**(code **)(*param_1 + 0x618))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x620));
      }
      if (param_1[8] != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09188938);
        System_Collections_Specialized_NotifyCollectionChangedEventArgs___ctor
                  (uVar4,0,lVar7,param_2,0);
        (**(code **)(*param_1 + 0x628))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x630));
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

