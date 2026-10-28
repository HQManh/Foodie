// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$get_Path
// address: 0x76e7724
// body: available
// range: 0x76e7724-0x76e7a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e7a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e7a60 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e7a6c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e7a78 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JToken__get_Path(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  if ((DAT_09522838 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4f10);
    FUN_03f5c2a4(&DAT_0917b0b0);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091ae028);
    FUN_03f5c2a4(&DAT_091ae020);
    FUN_03f5c2a4(&DAT_0917c5c8);
    DAT_09522838 = 1;
  }
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  if (param_1[2] == 0) {
    uVar7 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_0917c5c8);
    FUN_057ae7a4(lVar3,DAT_091ae020);
    plVar13 = (long *)0x0;
    do {
      plVar12 = param_1;
      uVar1 = (**(code **)(*plVar12 + 0x228))(plVar12,*(undefined8 *)(*plVar12 + 0x230));
      lVar8 = DAT_0917b0b0;
      if ((uVar1 & 0xfffffffe) == 2) {
        if (plVar13 != (long *)0x0) {
          lVar4 = thunk_FUN_03f99350(plVar12,DAT_0917b0b0);
          lVar9 = DAT_0917b0b0;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar12,lVar8);
          }
          plVar5 = (long *)thunk_FUN_03f99350(plVar12,DAT_0917b0b0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar12,lVar9);
          }
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_076e7918;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar5,lVar9,2);
LAB_076e7918:
          uVar2 = (*(code *)*puVar6)(plVar5,plVar13,puVar6[1]);
          if (*(int *)(DAT_09187398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187398);
          }
          Newtonsoft_Json_JsonPosition___ctor(&local_98,2,0);
          local_98 = CONCAT44(uVar2,(undefined4)local_98);
          lVar8 = DAT_091ae028;
joined_r0x076e7900:
          DAT_091ae028 = lVar8;
          if (lVar3 == 0) {
LAB_076e7a58:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_076e7a58;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + 0x30) = local_88;
            *(long *)(lVar9 + 0x28) = lStack_90;
            *(undefined8 *)(lVar9 + 0x20) = local_98;
            thunk_FUN_03f5d7b8(lVar9 + 0x28,0);
          }
          else {
            local_80 = local_98;
            lStack_78 = lStack_90;
            local_70 = local_88;
            FUN_057af0c8(lVar3,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else if (uVar1 == 4) {
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8)
            != DAT_09187230)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar12);
        }
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Newtonsoft_Json_JsonPosition___ctor(&local_98,1,0);
        lStack_90 = plVar12[0xc];
        thunk_FUN_03f5d7b8(&lStack_90);
        lVar8 = DAT_091ae028;
        goto joined_r0x076e7900;
      }
      param_1 = (long *)plVar12[2];
      plVar13 = plVar12;
    } while ((long *)plVar12[2] != (long *)0x0);
    FUN_04a67760(lVar3,DAT_091c4f10);
    if (*(int *)(DAT_09187398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uVar7 = Newtonsoft_Json_JsonPosition__BuildPath(lVar3,&local_c0,0);
  }
  return uVar7;
}

