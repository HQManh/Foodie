// rea decompile_all
// name: MessagePack.Internal.ByteArrayStringHashTable$$TryAddInternal
// address: 0x73b42f0
// body: available
// range: 0x73b42f0-0x73b45e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b45cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b45e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b45e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_ByteArrayStringHashTable__TryAddInternal
          (long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long local_70;
  undefined8 local_68;
  
  if ((DAT_09520bf8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c44d0);
    FUN_03f5c2a4(&DAT_09182130);
    FUN_03f5c2a4(&DAT_09180948);
    FUN_03f5c2a4(&DAT_091d2eb0);
    FUN_03f5c2a4(&DAT_091d2f70);
    FUN_03f5c2a4(&DAT_091b97a8);
    DAT_09520bf8 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  auVar14 = FUN_05ff6120(param_2,DAT_091b97a8);
  if (*(int *)(DAT_09182130 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_073b5950(auVar14._0_8_,auVar14._8_8_,0);
  local_68 = 0;
  local_70 = param_2;
  thunk_FUN_03f5d7b8(&local_70,param_2);
  lVar6 = local_70;
  local_68 = CONCAT44(local_68._4_4_,param_3);
  uVar4 = local_68;
  uVar2 = *(ulong *)(param_1 + 0x18) & uVar1;
  if ((long)uVar2 < 0) goto LAB_073b45d0;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_073b45e4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((uint)uVar2 < *(uint *)(lVar9 + 0x18)) {
    lVar13 = lVar9 + uVar2 * 8;
    plVar12 = (long *)(lVar13 + 0x20);
    lVar8 = *plVar12;
    if (lVar8 == 0) {
      lVar3 = FUN_03f5c394(DAT_09180948,1);
      if (lVar3 == 0) goto LAB_073b45e4;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(long *)(lVar3 + 0x20) = lVar6;
        *(undefined8 *)(lVar3 + 0x28) = uVar4;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),0);
        if ((uint)uVar2 < *(uint *)(lVar9 + 0x18)) {
          *plVar12 = lVar3;
          plVar12 = (long *)(lVar13 + 0x20);
LAB_073b459c:
          thunk_FUN_03f5d7b8(plVar12,lVar3);
          return 1;
        }
      }
    }
    else {
      iVar5 = (int)*(undefined8 *)(lVar8 + 0x18);
      if (0 < iVar5) {
        lVar9 = 0;
        puVar7 = (undefined8 *)(lVar8 + 0x20);
        do {
          uVar10 = *puVar7;
          if (*(long *)(DAT_091d2eb0 + 0x38) == 0) {
            FUN_03f95ac8();
            if (param_2 == 0) goto LAB_073b4460;
LAB_073b444c:
            uVar11 = *(undefined4 *)(param_2 + 0x18);
            lVar13 = param_2 + 0x20;
          }
          else {
            if (param_2 != 0) goto LAB_073b444c;
LAB_073b4460:
            lVar13 = 0;
            uVar11 = 0;
          }
          auVar14 = FUN_05ff6120(uVar10,DAT_091b97a8);
          uVar2 = FUN_073b6160(lVar13,uVar11,auVar14._0_8_,auVar14._8_8_,DAT_091d2f70);
          if ((uVar2 & 1) != 0) {
            return 0;
          }
          iVar5 = *(int *)(lVar8 + 0x18);
          lVar9 = lVar9 + 1;
          puVar7 = puVar7 + 2;
        } while (lVar9 < iVar5);
      }
      if (iVar5 == 0x7fffffff) goto LAB_073b45d0;
      lVar3 = FUN_03f5c394(DAT_09180948,iVar5 + 1);
      System_Array__Copy(lVar8,lVar3,*(undefined4 *)(lVar8 + 0x18),0);
      if (lVar3 == 0) goto LAB_073b45e4;
      iVar5 = (int)*(long *)(lVar3 + 0x18);
      if (iVar5 != 0) {
        if (iVar5 != -0x80000000) {
          lVar9 = lVar3 + ((*(long *)(lVar3 + 0x18) << 0x20) + -0x100000000 >> 0x1c);
          plVar12 = (long *)(lVar9 + 0x20);
          *plVar12 = lVar6;
          *(undefined8 *)(lVar9 + 0x28) = uVar4;
          thunk_FUN_03f5d7b8(plVar12,0);
          uVar1 = *(ulong *)(param_1 + 0x18) & uVar1;
          if (-1 < (long)uVar1) {
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 == 0) goto LAB_073b45e4;
            if ((uint)uVar1 < *(uint *)(lVar6 + 0x18)) {
              plVar12 = (long *)(lVar6 + uVar1 * 8 + 0x20);
              *plVar12 = lVar3;
              goto LAB_073b459c;
            }
            goto LAB_073b45cc;
          }
        }
LAB_073b45d0:
        uVar4 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,DAT_091c44d0);
      }
    }
  }
LAB_073b45cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

