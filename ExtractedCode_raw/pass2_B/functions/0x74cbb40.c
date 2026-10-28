// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray$$Init
// address: 0x74cbb40
// body: available
// range: 0x74cbb40-0x74cbf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cbe68 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74cbf08 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_PrimitiveArray__Init
               (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((DAT_095214de & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091801b0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_091804c8);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091807a8);
    FUN_03f5c2a4(&DAT_091807b0);
    FUN_03f5c2a4(&DAT_091807b8);
    DAT_095214de = 1;
  }
  *(int *)(param_1 + 0x10) = param_2;
  uVar10 = DAT_091807b8;
  uVar9 = DAT_091807b0;
  uVar8 = DAT_091807a8;
  uVar7 = DAT_09180528;
  uVar6 = DAT_091804c8;
  uVar5 = DAT_091801c0;
  uVar4 = DAT_091801b8;
  uVar3 = DAT_091801b0;
  uVar2 = DAT_0917fe78;
  uVar1 = DAT_0917fcc8;
  uVar14 = DAT_0917fc40;
  if (param_2 < 9) {
    if (param_2 < 6) {
      if (param_2 == 1) {
        if (param_3 == 0) {
          lVar11 = 0;
          plVar12 = (long *)(param_1 + 0x18);
          *plVar12 = 0;
          goto LAB_074cbe58;
        }
        lVar11 = thunk_FUN_03f99350(param_3,DAT_0917fc40);
        uVar13 = DAT_0917fc40;
        if (lVar11 == 0) goto LAB_074cbf00;
        plVar12 = (long *)(param_1 + 0x18);
        *plVar12 = lVar11;
      }
      else {
        if (param_2 != 3) {
          return;
        }
        if (param_3 == 0) {
          lVar11 = 0;
          plVar12 = (long *)(param_1 + 0x20);
          *plVar12 = 0;
          goto LAB_074cbe58;
        }
        lVar11 = thunk_FUN_03f99350(param_3,DAT_0917fcc8);
        uVar13 = DAT_0917fcc8;
        uVar14 = uVar1;
        if (lVar11 == 0) goto LAB_074cbf00;
        plVar12 = (long *)(param_1 + 0x20);
        *plVar12 = lVar11;
      }
    }
    else if (param_2 == 6) {
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x28);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_0917fe78);
      uVar13 = DAT_0917fe78;
      uVar14 = uVar2;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x28);
      *plVar12 = lVar11;
    }
    else if (param_2 == 7) {
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x30);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_091801b0);
      uVar13 = DAT_091801b0;
      uVar14 = uVar3;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x30);
      *plVar12 = lVar11;
    }
    else {
      if (param_2 != 8) {
        return;
      }
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x38);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_091801b8);
      uVar13 = DAT_091801b8;
      uVar14 = uVar4;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x38);
      *plVar12 = lVar11;
    }
  }
  else if (param_2 < 0xe) {
    if (param_2 == 9) {
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x40);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_091801c0);
      uVar13 = DAT_091801c0;
      uVar14 = uVar5;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x40);
      *plVar12 = lVar11;
    }
    else if (param_2 == 10) {
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x48);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_091804c8);
      uVar13 = DAT_091804c8;
      uVar14 = uVar6;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x48);
      *plVar12 = lVar11;
    }
    else {
      if (param_2 != 0xb) {
        return;
      }
      if (param_3 == 0) {
        lVar11 = 0;
        plVar12 = (long *)(param_1 + 0x50);
        *plVar12 = 0;
        goto LAB_074cbe58;
      }
      lVar11 = thunk_FUN_03f99350(param_3,DAT_09180528);
      uVar13 = DAT_09180528;
      uVar14 = uVar7;
      if (lVar11 == 0) goto LAB_074cbf00;
      plVar12 = (long *)(param_1 + 0x50);
      *plVar12 = lVar11;
    }
  }
  else if (param_2 == 0xe) {
    if (param_3 == 0) {
      lVar11 = 0;
      plVar12 = (long *)(param_1 + 0x58);
      *plVar12 = 0;
      goto LAB_074cbe58;
    }
    lVar11 = thunk_FUN_03f99350(param_3,DAT_091807a8);
    uVar13 = DAT_091807a8;
    uVar14 = uVar8;
    if (lVar11 == 0) goto LAB_074cbf00;
    plVar12 = (long *)(param_1 + 0x58);
    *plVar12 = lVar11;
  }
  else if (param_2 == 0xf) {
    if (param_3 == 0) {
      lVar11 = 0;
      plVar12 = (long *)(param_1 + 0x60);
      *plVar12 = 0;
      goto LAB_074cbe58;
    }
    lVar11 = thunk_FUN_03f99350(param_3,DAT_091807b0);
    uVar13 = DAT_091807b0;
    uVar14 = uVar9;
    if (lVar11 == 0) goto LAB_074cbf00;
    plVar12 = (long *)(param_1 + 0x60);
    *plVar12 = lVar11;
  }
  else {
    if (param_2 != 0x10) {
      return;
    }
    if (param_3 == 0) {
      lVar11 = 0;
      plVar12 = (long *)(param_1 + 0x68);
      *plVar12 = 0;
      goto LAB_074cbe58;
    }
    lVar11 = thunk_FUN_03f99350(param_3,DAT_091807b8);
    uVar13 = DAT_091807b8;
    uVar14 = uVar10;
    if (lVar11 == 0) goto LAB_074cbf00;
    plVar12 = (long *)(param_1 + 0x68);
    *plVar12 = lVar11;
  }
  lVar11 = thunk_FUN_03f99350(param_3,uVar13);
  uVar14 = uVar13;
  if (lVar11 == 0) {
LAB_074cbf00:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3,uVar14);
  }
LAB_074cbe58:
  thunk_FUN_03f5d7b8(plVar12,lVar11);
  return;
}

