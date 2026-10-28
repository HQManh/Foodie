// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter$$WriteObject
// address: 0x74bdc18
// body: available
// range: 0x74bdc18-0x74be1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74bddf0 to 0x74b7da4 System.Runtime.Serialization.Formatters.Binary.BinaryObject$$Write (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74be1ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be1b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be1bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be1c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074bdf04) */
/* WARNING: Removing unreachable block (ram,0x074be1b4) */

void System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObject
               (long param_1,long param_2,long param_3,uint param_4,undefined8 param_5,long param_6,
               long param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if ((DAT_09521475 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c98);
    FUN_03f5c2a4(&DAT_09181c90);
    FUN_03f5c2a4(&DAT_09181c80);
    FUN_03f5c2a4(&DAT_0917fc30);
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188b38);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521475 = 1;
  }
  System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull(param_1);
  if ((param_2 != 0) &&
     ((iVar1 = *(int *)(param_2 + 0x18), -1 < iVar1 || (param_2 = param_3, param_3 != 0)))) {
    uVar3 = System_Runtime_Serialization_Formatters_Binary_NameInfo__get_NIname(param_2,0);
    plVar12 = (long *)(param_1 + 0x20);
    plVar9 = (long *)*plVar12;
    if (plVar9 == (long *)0x0) {
      lVar4 = thunk_FUN_03f9944c(DAT_09185048);
      System_Collections_Hashtable___ctor(lVar4,0);
      *plVar12 = lVar4;
      thunk_FUN_03f5d7b8(plVar12,lVar4);
      plVar9 = (long *)*plVar12;
      if (plVar9 == (long *)0x0) goto LAB_074be1ac;
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x310));
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != DAT_09188b38) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar9);
      }
      uVar5 = System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo__isCompatible
                        (plVar9,param_4,param_5,param_6);
      if ((uVar5 & 1) != 0) {
        plVar12 = (long *)(param_1 + 0x50);
        lVar4 = *plVar12;
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09181c80);
          System_Object___ctor(lVar4,0);
          *plVar12 = lVar4;
          thunk_FUN_03f5d7b8(plVar12,lVar4);
          lVar4 = *plVar12;
          if (lVar4 == 0) goto LAB_074be1ac;
        }
        lVar6 = plVar9[2];
        *(int *)(lVar4 + 0x10) = iVar1;
        *(int *)(lVar4 + 0x14) = (int)lVar6;
        System_Runtime_Serialization_Formatters_Binary_BinaryObject__Write(lVar4,param_1);
        return;
      }
    }
    if (param_3 != 0) {
      if (*(char *)(param_3 + 0x3b) == '\0') {
        plVar13 = (long *)(param_1 + 0x58);
        lVar4 = *plVar13;
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09181c90);
          System_Object___ctor(lVar4,0);
          *plVar13 = lVar4;
          thunk_FUN_03f5d7b8(plVar13,lVar4);
          lVar4 = *plVar13;
          iVar10 = *(int *)(param_3 + 0x20);
          if (lVar4 == 0) goto LAB_074be1ac;
        }
        else {
          iVar10 = *(int *)(param_3 + 0x20);
        }
        *(int *)(lVar4 + 0x14) = iVar1;
        *(undefined8 *)(lVar4 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar3);
        *(undefined8 *)(lVar4 + 0x28) = param_5;
        *(uint *)(lVar4 + 0x20) = param_4;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),param_5);
        *(int *)(lVar4 + 0x30) = iVar10;
        uVar2 = 2;
        if (0 < iVar10) {
          uVar2 = 3;
        }
        *(undefined4 *)(lVar4 + 0x10) = uVar2;
        if (*plVar13 != 0) {
          System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMap__Write
                    (*plVar13,param_1);
          if (plVar9 != (long *)0x0) {
            return;
          }
          plVar12 = (long *)*plVar12;
          uVar8 = thunk_FUN_03f9944c(DAT_09188b38);
          System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo___ctor
                    (uVar8,iVar1,param_4,param_5,param_6);
          if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x074be1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar12 + 0x2a8))(plVar12,uVar3,uVar8,*(undefined8 *)(*plVar12 + 0x2b0));
            return;
          }
        }
      }
      else {
        lVar4 = FUN_03f5c394(DAT_0917fc30,param_4);
        lVar6 = FUN_03f5c394(DAT_09180318,param_4);
        lVar7 = FUN_03f5c394(DAT_091801b8,param_4);
        if (0 < (int)param_4) {
          lVar11 = 0;
          uVar5 = 0;
          do {
            if (param_6 == 0) goto LAB_074be1ac;
            if (*(uint *)(param_6 + 0x18) <= uVar5) {
LAB_074be1b0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (param_7 == 0) goto LAB_074be1ac;
            if (*(uint *)(param_7 + 0x18) <= uVar5) goto LAB_074be1b0;
            uVar2 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetBinaryTypeInfo
                              (*(undefined8 *)(param_6 + 0x20 + uVar5 * 8),
                               *(undefined8 *)(param_7 + 0x20 + uVar5 * 8));
            if (lVar4 == 0) goto LAB_074be1ac;
            if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_074be1b0;
            *(undefined4 *)(lVar4 + 0x20 + uVar5 * 4) = uVar2;
            if (lVar6 == 0) goto LAB_074be1ac;
            if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_074be1b0;
            *(undefined8 *)(lVar6 + 0x20 + uVar5 * 8) = 0;
            thunk_FUN_03f5d7b8(lVar6 + 0x20 + lVar11,0);
            if (lVar7 == 0) goto LAB_074be1ac;
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_074be1b0;
            lVar11 = lVar11 + 8;
            *(undefined4 *)(lVar7 + 0x20 + uVar5 * 4) = 0;
            uVar5 = uVar5 + 1;
          } while (param_4 != uVar5);
        }
        plVar13 = (long *)(param_1 + 0x60);
        lVar11 = *plVar13;
        if (lVar11 == 0) {
          lVar11 = thunk_FUN_03f9944c(DAT_09181c98);
          System_Object___ctor(lVar11,0);
          *plVar13 = lVar11;
          thunk_FUN_03f5d7b8(plVar13,lVar11);
          lVar11 = *plVar13;
          uVar2 = *(undefined4 *)(param_3 + 0x20);
          if (lVar11 == 0) goto LAB_074be1ac;
        }
        else {
          uVar2 = *(undefined4 *)(param_3 + 0x20);
        }
        System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped__Set
                  (lVar11,iVar1,uVar3,param_4,param_5,lVar4,lVar6,lVar7,uVar2);
        if (*plVar13 != 0) {
          System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped__Write
                    (*plVar13,param_1);
          if (plVar9 == (long *)0x0) {
            plVar12 = (long *)*plVar12;
            uVar8 = thunk_FUN_03f9944c(DAT_09188b38);
            System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo___ctor
                      (uVar8,iVar1,param_4,param_5,param_6);
            if (plVar12 == (long *)0x0) goto LAB_074be1ac;
            (**(code **)(*plVar12 + 0x2a8))(plVar12,uVar3,uVar8,*(undefined8 *)(*plVar12 + 0x2b0));
          }
          return;
        }
      }
    }
  }
LAB_074be1ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

