// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils$$TryGetDateFromConstructorJson
// address: 0x76971e4
// body: available
// range: 0x76971e4-0x769763f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769763c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_JavaScriptUtils__TryGetDateFromConstructorJson
          (undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_095225c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09187288);
    FUN_03f5c2a4(&DAT_091add50);
    FUN_03f5c2a4(&DAT_091add38);
    FUN_03f5c2a4(&DAT_091add70);
    FUN_03f5c2a4(&DAT_091add78);
    FUN_03f5c2a4(&DAT_0917c528);
    FUN_03f5c2a4(&DAT_091b6fe8);
    FUN_03f5c2a4(&DAT_091b6ff0);
    FUN_03f5c2a4(&DAT_092001e0);
    FUN_03f5c2a4(&DAT_09211de8);
    DAT_095225c6 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  *param_2 = 0;
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(int *)(DAT_09187288 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = Newtonsoft_Json_Utilities_JavaScriptUtils__TryGetDateConstructorValue
                    (param_1,&local_60,param_3);
  if (((uVar8 & 1) == 0) || ((char)local_60 == '\0')) {
    lVar12 = DAT_092001e0;
    if (*param_3 != 0) {
      lVar12 = *param_3;
    }
LAB_076973bc:
    *param_3 = lVar12;
    thunk_FUN_03f5d7b8(param_3);
  }
  else {
    if (*(int *)(DAT_09187288 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = Newtonsoft_Json_Utilities_JavaScriptUtils__TryGetDateConstructorValue
                      (param_1,&local_70,param_3);
    if ((uVar8 & 1) != 0) {
      if ((char)local_70 != '\0') {
        lVar9 = thunk_FUN_03f9944c(DAT_0917c528);
        FUN_0579bb80(lVar9,DAT_091add38);
        uVar10 = FUN_05c30ee8(&local_60,DAT_091b6ff0);
        lVar12 = DAT_091add50;
        if (lVar9 != 0) {
          lVar14 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar13 = *(uint *)(lVar9 + 0x18);
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar13 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
            }
            else {
              FUN_0579c40c(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            puVar11 = &local_70;
            while( true ) {
              uVar10 = FUN_05c30ee8(puVar11,DAT_091b6ff0);
              lVar12 = DAT_091add50;
              lVar14 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar13 = *(uint *)(lVar9 + 0x18);
              if (uVar13 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar13 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
              }
              else {
                FUN_0579c40c(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(DAT_09187288 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = Newtonsoft_Json_Utilities_JavaScriptUtils__TryGetDateConstructorValue
                                (param_1,&local_80,param_3);
              if ((uVar8 & 1) == 0) {
                return 0;
              }
              if ((char)local_80 == '\0') {
                uVar13 = *(uint *)(lVar9 + 0x18);
                lVar12 = DAT_09211de8;
                if (7 < (int)uVar13) goto LAB_076973bc;
                lVar12 = DAT_091add50;
                if (uVar13 != 7) goto LAB_076974ec;
                goto LAB_07697548;
              }
              puVar11 = &local_80;
            }
          }
        }
LAB_0769763c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = FUN_05c30ee8(&local_60,DAT_091b6ff0);
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835c0);
      }
      local_48 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertJavaScriptTicksToDateTime(uVar10);
      goto LAB_07697620;
    }
  }
  return 0;
  while( true ) {
    if (uVar13 < *(uint *)(lVar14 + 0x18)) {
      lVar1 = (long)(int)uVar13;
      uVar13 = uVar13 + 1;
      *(uint *)(lVar9 + 0x18) = uVar13;
      *(undefined8 *)(lVar14 + lVar1 * 8 + 0x20) = 0;
    }
    else {
      FUN_0579c40c(lVar9,0,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      uVar13 = *(uint *)(lVar9 + 0x18);
      lVar12 = DAT_091add50;
    }
    if (6 < (int)uVar13) break;
LAB_076974ec:
    lVar14 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_0769763c;
  }
LAB_07697548:
  uVar2 = FUN_0579c118(lVar9,0,DAT_091add78);
  uVar4 = 1;
  iVar3 = FUN_0579c118(lVar9,1,DAT_091add78);
  lVar12 = FUN_0579c118(lVar9,2,DAT_091add78);
  if (lVar12 != 0) {
    uVar4 = FUN_0579c118(lVar9,2,DAT_091add78);
  }
  uVar5 = FUN_0579c118(lVar9,3,DAT_091add78);
  uVar6 = FUN_0579c118(lVar9,4,DAT_091add78);
  uVar7 = FUN_0579c118(lVar9,5,DAT_091add78);
  uVar10 = FUN_0579c118(lVar9,6,DAT_091add78);
  local_48 = 0;
  System_DateTime___ctor(&local_48,uVar2,iVar3 + 1,uVar4,uVar5,uVar6,uVar7,uVar10,0);
LAB_07697620:
  *param_2 = local_48;
  return 1;
}

