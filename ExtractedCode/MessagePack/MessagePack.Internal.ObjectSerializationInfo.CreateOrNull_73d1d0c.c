// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo$$CreateOrNull
// address: 0x73d1d0c
// body: available
// range: 0x73d1d0c-0x73d2967 inclusive
// range: 0x73d296c-0x73d296f inclusive
// range: 0x73d2974-0x73d2987 inclusive
// range: 0x73d298c-0x73d298f inclusive
// range: 0x73d2994-0x73d2997 inclusive
// range: 0x73d299c-0x73d299f inclusive
// range: 0x73d2a28-0x73d45cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d2964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d296c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d2984 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d298c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d2994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d299c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d3ff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d3ffc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d4010 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d4014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d4018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d401c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073d2f04) */
/* WARNING: Removing unreachable block (ram,0x073d4318) */
/* WARNING: Removing unreachable block (ram,0x073d4030) */
/* WARNING: Removing unreachable block (ram,0x073d2954) */
/* WARNING: Removing unreachable block (ram,0x073d2ab8) */

long MessagePack_Internal_ObjectSerializationInfo__CreateOrNull
               (long param_1,byte param_2,ulong param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long extraout_x1;
  ulong uVar24;
  undefined8 *puVar25;
  int *piVar26;
  long lVar27;
  long *plVar28;
  bool bVar29;
  long *plVar30;
  undefined4 local_fc;
  long *local_d8;
  long **pplStack_d0;
  long local_c8;
  undefined8 local_c0;
  long **pplStack_b8;
  long *local_b0;
  long **pplStack_a8;
  long local_a0;
  long local_90;
  int local_84;
  ulong local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_09520cce & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091c6d18);
    FUN_03f5c2a4(&DAT_091c6db0);
    FUN_03f5c2a4(&DAT_091c6dd0);
    FUN_03f5c2a4(&DAT_091c6e00);
    FUN_03f5c2a4(&DAT_091a0450);
    FUN_03f5c2a4(&DAT_0919e140);
    FUN_03f5c2a4(&DAT_091a0468);
    FUN_03f5c2a4(&DAT_0919e158);
    FUN_03f5c2a4(&DAT_09176d38);
    FUN_03f5c2a4(&DAT_09176638);
    FUN_03f5c2a4(&DAT_09192e88);
    FUN_03f5c2a4(&DAT_091c9608);
    FUN_03f5c2a4(&DAT_091c9680);
    FUN_03f5c2a4(&DAT_091c9730);
    FUN_03f5c2a4(&DAT_091c9ba8);
    FUN_03f5c2a4(&DAT_091c9a08);
    FUN_03f5c2a4(&DAT_091c9e18);
    FUN_03f5c2a4(&DAT_091ca130);
    FUN_03f5c2a4(&DAT_091ca0c8);
    FUN_03f5c2a4(&DAT_091c9f90);
    FUN_03f5c2a4(&DAT_091ca0f8);
    FUN_03f5c2a4(&DAT_091ca1a8);
    FUN_03f5c2a4(&DAT_091ca5d8);
    FUN_03f5c2a4(&DAT_091caa90);
    FUN_03f5c2a4(&DAT_091caf80);
    FUN_03f5c2a4(&DAT_091cb028);
    FUN_03f5c2a4(&DAT_091cb330);
    FUN_03f5c2a4(&DAT_091cb418);
    FUN_03f5c2a4(&DAT_091cb640);
    FUN_03f5c2a4(&DAT_091a5678);
    FUN_03f5c2a4(&DAT_091a5680);
    FUN_03f5c2a4(&DAT_091a5688);
    FUN_03f5c2a4(&DAT_09178600);
    FUN_03f5c2a4(&DAT_09178d20);
    FUN_03f5c2a4(&DAT_091794c0);
    FUN_03f5c2a4(&DAT_091794c8);
    FUN_03f5c2a4(&DAT_09178090);
    FUN_03f5c2a4(&DAT_09178d18);
    FUN_03f5c2a4(&DAT_09178328);
    FUN_03f5c2a4(&DAT_09178168);
    FUN_03f5c2a4(&DAT_09178160);
    FUN_03f5c2a4(&DAT_09178d28);
    FUN_03f5c2a4(&DAT_09178320);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_09179550);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3d8);
    FUN_03f5c2a4(&DAT_0917a860);
    FUN_03f5c2a4(&DAT_0917a278);
    FUN_03f5c2a4(&DAT_0917af78);
    FUN_03f5c2a4(&DAT_0917a8c0);
    FUN_03f5c2a4(&DAT_0917aa80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b160);
    FUN_03f5c2a4(&DAT_0917b440);
    FUN_03f5c2a4(&DAT_091874c0);
    FUN_03f5c2a4(&DAT_091a9990);
    FUN_03f5c2a4(&DAT_091b34d0);
    FUN_03f5c2a4(&DAT_091b34d8);
    FUN_03f5c2a4(&DAT_091b34e0);
    FUN_03f5c2a4(&DAT_091b34e8);
    FUN_03f5c2a4(&DAT_091b34c8);
    FUN_03f5c2a4(&DAT_0917d5f0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6fc0);
    FUN_03f5c2a4(&DAT_091d5080);
    FUN_03f5c2a4(&DAT_09188b58);
    FUN_03f5c2a4(&DAT_09192e90);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091eddc8);
    FUN_03f5c2a4(&DAT_091eddd0);
    FUN_03f5c2a4(&DAT_091eddd8);
    FUN_03f5c2a4(&DAT_091edde0);
    FUN_03f5c2a4(&DAT_091edde8);
    FUN_03f5c2a4(&DAT_091eddf0);
    FUN_03f5c2a4(&DAT_091eddf8);
    FUN_03f5c2a4(&DAT_091ede00);
    FUN_03f5c2a4(&DAT_091ede08);
    FUN_03f5c2a4(&DAT_091ede10);
    FUN_03f5c2a4(&DAT_091ede18);
    FUN_03f5c2a4(&DAT_091ede20);
    FUN_03f5c2a4(&DAT_091ede28);
    FUN_03f5c2a4(&DAT_091ede30);
    FUN_03f5c2a4(&DAT_091ede38);
    FUN_03f5c2a4(&DAT_091ede48);
    FUN_03f5c2a4(&DAT_091ede58);
    FUN_03f5c2a4(&DAT_09192e68);
    FUN_03f5c2a4(&DAT_09192e58);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520cce = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_84 = 0;
  local_90 = 0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_09192e68);
  System_Object___ctor(lVar7,0);
  if (lVar7 != 0) {
    plVar28 = (long *)(lVar7 + 0x20);
    *plVar28 = param_1;
    thunk_FUN_03f5d7b8(plVar28,param_1);
    *(byte *)(lVar7 + 0x29) = param_4 & 1;
    plVar8 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(*plVar28,0);
    if (plVar8 != (long *)0x0) {
      uVar9 = System_Type__get_IsClass(plVar8,0);
      if ((((uVar9 & 1) == 0) && (uVar9 = System_Type__get_IsInterface(plVar8,0), (uVar9 & 1) == 0))
         && (uVar9 = System_Type__get_IsAbstract(plVar8,0), (uVar9 & 1) == 0)) {
        local_fc = 0;
        bVar1 = 0;
      }
      else {
        bVar1 = MessagePack_Internal_ObjectSerializationInfo__IsClassRecord(plVar8);
        local_fc = 1;
      }
      *(byte *)(lVar7 + 0x28) = bVar1 & 1;
      uVar2 = System_Type__get_IsValueType(plVar8,0);
      uVar10 = FUN_04a7bbc0(plVar8,DAT_091c6e00);
      lVar11 = FUN_04ae45c0(uVar10,DAT_091c9ba8);
      lVar12 = FUN_04a7b9a0(plVar8,DAT_091c6d18);
      if (((lVar11 == 0) && (lVar12 == 0)) && (((param_2 & 1) == 0 && ((param_3 & 1) == 0)))) {
        return 0;
      }
      lVar12 = thunk_FUN_03f9944c(DAT_09176638);
      FUN_06eef750(lVar12,DAT_0919e140);
      plVar13 = (long *)(lVar7 + 0x10);
      *plVar13 = lVar12;
      thunk_FUN_03f5d7b8(plVar13,lVar12);
      lVar12 = thunk_FUN_03f9944c(DAT_09176d38);
      FUN_06fd76bc(lVar12,DAT_091a0450);
      plVar14 = (long *)(lVar7 + 0x18);
      *plVar14 = lVar12;
      thunk_FUN_03f5d7b8(plVar14,lVar12);
      if ((((param_2 & 1) == 0) && ((param_3 & 1) == 0)) &&
         ((lVar11 == 0 || (*(char *)(lVar11 + 0x10) == '\0')))) {
        bVar1 = 1;
        uVar10 = MessagePack_Internal_ObjectSerializationInfo__GetAllProperties
                           (*(undefined8 *)(lVar7 + 0x20));
        uVar10 = FUN_04ab7e4c(uVar10,DAT_091c9608);
        uVar15 = MessagePack_Internal_ObjectSerializationInfo__GetAllFields
                           (*(undefined8 *)(lVar7 + 0x20));
        uVar10 = FUN_04ad43f0(uVar10,uVar15,DAT_091c9680);
        uVar15 = thunk_FUN_03f9944c(DAT_09178d28);
        FUN_05324070(uVar15,lVar7,DAT_091ede58,0);
        plVar16 = (long *)FUN_04af8044(uVar10,uVar15,DAT_091ca5d8);
        if (plVar16 != (long *)0x0) {
          lVar12 = *plVar16;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 != 0) {
            piVar26 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == DAT_0917a860) {
                puVar25 = (undefined8 *)(lVar12 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_073d2bb8;
              }
              uVar9 = uVar9 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar9 != 0);
          }
          puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917a860,0);
LAB_073d2bb8:
          local_78 = (long *)(*(code *)*puVar25)(plVar16,puVar25[1]);
          pplStack_d0 = &local_78;
          iVar5 = 0;
          local_d8 = (long *)0x0;
          bVar29 = true;
LAB_073d2bf0:
          do {
            plVar16 = local_78;
            if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *local_78;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar26 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                  puVar25 = (undefined8 *)(lVar12 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_073d2c44;
                }
                uVar9 = uVar9 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar9 != 0);
            }
            puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_073d2c44:
            uVar9 = (*(code *)*puVar25)(plVar16,puVar25[1]);
            plVar16 = local_78;
            if ((uVar9 & 1) == 0) {
              if (local_78 == (long *)0x0) goto LAB_073d2f08;
              lVar11 = *local_78;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 == 0) goto LAB_073d2ed0;
              piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_073d2eb8;
            }
            if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar12 = *local_78;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar26 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == DAT_0917af78) {
                  puVar25 = (undefined8 *)(lVar12 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_073d2ca8;
                }
                uVar9 = uVar9 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar9 != 0);
            }
            puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917af78,0);
LAB_073d2ca8:
            lVar12 = (*(code *)*puVar25)(plVar16,puVar25[1]);
          } while (lVar12 == 0);
          plVar16 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                      (lVar12);
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_FieldInfo
                                        (lVar12);
          }
          if (lVar11 == 0) {
            lVar18 = FUN_04a7ba50(plVar16,1,DAT_091c6db0);
            if (lVar18 == 0) goto LAB_073d2bf0;
            iVar6 = *(int *)(lVar18 + 0x1c);
            if (iVar6 == -1) {
              lVar27 = *(long *)(lVar18 + 0x10);
              if (lVar27 == 0) {
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar10 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
                lVar18 = thunk_FUN_03f9944c(DAT_091874c0);
                MessagePack_KeyAttribute___ctor(lVar18,uVar10,0);
              }
              else {
                lVar18 = thunk_FUN_03f9944c(DAT_091874c0);
                MessagePack_KeyAttribute___ctor(lVar18,lVar27,0);
              }
            }
            else {
              lVar18 = thunk_FUN_03f9944c(DAT_091874c0);
              MessagePack_KeyAttribute___ctor(lVar18,iVar6,0);
            }
          }
          else {
            lVar18 = FUN_04a7ba50(plVar16,1,DAT_091c6dd0);
            if (lVar18 == 0) {
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar10 = (**(code **)(*plVar28 + 0x2f8))(plVar28,*(undefined8 *)(*plVar28 + 0x300));
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar15 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              uVar22 = thunk_FUN_03fc39d4(&DAT_092174a8);
              uVar23 = thunk_FUN_03fc39d4(&DAT_091f67c0);
              uVar10 = System_String__Concat(uVar22,uVar10,uVar23,uVar15,0);
              thunk_FUN_03fc39d4(&DAT_09188158);
              uVar15 = thunk_FUN_03f9944c();
              MessagePack_MessagePackSerializationException___ctor(uVar15,uVar10,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091d5080);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar15,uVar10);
            }
            local_80 = *(ulong *)(lVar18 + 0x10);
            if (((local_80 & 0xff) == 0) && (*(long *)(lVar18 + 0x18) == 0)) {
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar10 = (**(code **)(*plVar28 + 0x2f8))(plVar28,*(undefined8 *)(*plVar28 + 0x300));
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar15 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              uVar22 = thunk_FUN_03fc39d4(&DAT_09218450);
              uVar23 = thunk_FUN_03fc39d4(&DAT_091f67c0);
              uVar10 = System_String__Concat(uVar22,uVar10,uVar23,uVar15,0);
              thunk_FUN_03fc39d4(&DAT_09188158);
              uVar15 = thunk_FUN_03f9944c();
              MessagePack_MessagePackSerializationException___ctor(uVar15,uVar10,0);
              uVar10 = thunk_FUN_03fc39d4(&DAT_091d5080);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar15,uVar10);
            }
          }
          *(undefined1 *)(lVar12 + 0x28) = 1;
          if (bVar29) {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_80 = *(ulong *)(lVar18 + 0x10);
            if ((local_80 & 0xff) == 0) {
              lVar18 = *(long *)(lVar18 + 0x18);
              goto LAB_073d2e2c;
            }
LAB_073d2e00:
            iVar3 = FUN_05c307a4(&local_80,DAT_091b6fc0);
            bVar1 = 1;
            iVar6 = iVar5;
          }
          else {
            if (bVar1 != 0) {
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              local_80 = *(ulong *)(lVar18 + 0x10);
              if ((local_80 & 0xff) == 0) {
LAB_073d43b0:
                plVar28 = (long *)*plVar28;
                if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar10 = (**(code **)(*plVar28 + 0x2f8))(plVar28,*(undefined8 *)(*plVar28 + 0x300));
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar15 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
                uVar22 = thunk_FUN_03fc39d4(&DAT_092174a0);
                uVar23 = thunk_FUN_03fc39d4(&DAT_091f67c0);
                uVar10 = System_String__Concat(uVar22,uVar10,uVar23,uVar15,0);
                thunk_FUN_03fc39d4(&DAT_09188158);
                uVar15 = thunk_FUN_03f9944c();
                MessagePack_MessagePackSerializationException___ctor(uVar15,uVar10,0);
                uVar10 = thunk_FUN_03fc39d4(&DAT_091d5080);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar15,uVar10);
              }
              goto LAB_073d2e00;
            }
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar18 = *(long *)(lVar18 + 0x18);
            if (lVar18 == 0) goto LAB_073d43b0;
LAB_073d2e2c:
            *(long *)(lVar12 + 0x18) = lVar18;
            thunk_FUN_03f5d7b8();
            if (iVar5 == 0x7fffffff) {
              uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar10,DAT_091d5080);
            }
            bVar1 = 0;
            iVar6 = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar6;
          *(int *)(lVar12 + 0x14) = iVar3;
          MessagePack_Internal_ObjectSerializationInfo_<>c__DisplayClass27_0__<CreateOrNull>g__AddEmittableMemberOrIgnore_0
                    (lVar7,bVar1,lVar12,1);
          bVar29 = false;
          goto LAB_073d2bf0;
        }
      }
      else {
        bVar1 = param_2 ^ 1;
        if ((lVar11 != 0) && ((param_2 & 1) == 0)) {
          bVar1 = *(char *)(lVar11 + 0x10) == '\0';
        }
        uVar10 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperties(*plVar28,0);
        uVar15 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeFields(*plVar28,0);
        uVar15 = FUN_04ab7e4c(uVar15,DAT_091c9608);
        uVar10 = FUN_04ad43f0(uVar10,uVar15,DAT_091c9680);
        if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09192e58);
        }
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
        lVar11 = puVar25[1];
        if (lVar11 == 0) {
          if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09192e58);
            puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
          }
          uVar15 = *puVar25;
          lVar11 = thunk_FUN_03f9944c(DAT_09178d20);
          FUN_05324070(lVar11,uVar15,DAT_091ede30,0);
          plVar16 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 8);
          *plVar16 = lVar11;
          thunk_FUN_03f5d7b8(plVar16,lVar11);
        }
        if (*(int *)(DAT_09192e90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = FUN_04aeafe8(uVar10,lVar11,**(undefined8 **)(DAT_09192e90 + 0xb8),DAT_091ca0f8);
        if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09192e58);
        }
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
        lVar11 = puVar25[2];
        if (lVar11 == 0) {
          if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09192e58);
            puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
          }
          uVar15 = *puVar25;
          lVar11 = thunk_FUN_03f9944c(DAT_09178d18);
          FUN_05324070(lVar11,uVar15,DAT_091ede38,0);
          plVar16 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x10);
          *plVar16 = lVar11;
          thunk_FUN_03f5d7b8(plVar16,lVar11);
        }
        plVar16 = (long *)FUN_04ae6e8c(uVar10,lVar11,DAT_091c9e18);
        if (plVar16 != (long *)0x0) {
          lVar11 = *plVar16;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == DAT_0917a278) {
                puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_073d2564;
              }
              uVar9 = uVar9 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar9 != 0);
          }
          puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917a278,0);
LAB_073d2564:
          local_70 = (long *)(*(code *)*puVar25)(plVar16,puVar25[1]);
          pplStack_d0 = &local_70;
          local_d8 = (long *)0x0;
          if (local_70 != (long *)0x0) {
            iVar5 = 0;
            do {
              plVar16 = local_70;
              lVar11 = *local_70;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                    puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_073d25f0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar9 != 0);
              }
              puVar25 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185b10,0);
LAB_073d25f0:
              uVar9 = (*(code *)*puVar25)(plVar16,puVar25[1]);
              plVar16 = local_70;
              if ((uVar9 & 1) == 0) {
                plVar16 = *pplStack_d0;
                if (plVar16 == (long *)0x0) goto LAB_073d2aa8;
                lVar11 = *plVar16;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 == 0) goto LAB_073d2a80;
                piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                goto LAB_073d2a68;
              }
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = *local_70;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == DAT_0917a8c0) {
                    puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_073d265c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar9 != 0);
              }
              puVar25 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917a8c0,0);
LAB_073d265c:
              uVar10 = (*(code *)*puVar25)(plVar16,puVar25[1]);
              uVar15 = thunk_FUN_03f9944c(DAT_09178d28);
              FUN_05324070(uVar15,lVar7,DAT_091ede58,0);
              plVar16 = (long *)FUN_04af8044(uVar10,uVar15,DAT_091ca5d8);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = *plVar16;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == DAT_0917a860) {
                    puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_073d2704;
                  }
                  uVar9 = uVar9 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar9 != 0);
              }
              puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917a860,0);
LAB_073d2704:
              local_78 = (long *)(*(code *)*puVar25)(plVar16,puVar25[1]);
              bVar29 = true;
              local_c0 = 0;
              pplStack_b8 = &local_78;
LAB_073d2720:
              plVar16 = local_78;
              if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = *local_78;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == DAT_09185b10) {
                    puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_073d2774;
                  }
                  uVar9 = uVar9 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar9 != 0);
              }
              puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185b10,0);
LAB_073d2774:
              uVar9 = (*(code *)*puVar25)(plVar16,puVar25[1]);
              plVar16 = local_78;
              if ((uVar9 & 1) != 0) {
                if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar11 = *local_78;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 != 0) {
                  piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == DAT_0917af78) {
                      puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                      goto LAB_073d27d8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar9 != 0);
                }
                puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917af78,0);
LAB_073d27d8:
                lVar11 = (*(code *)*puVar25)(plVar16,puVar25[1]);
                if (lVar11 != 0) {
                  plVar16 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                              (lVar11);
                  if (plVar16 == (long *)0x0) {
                    plVar16 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_FieldInfo
                                                (lVar11);
                    if (!bVar29) goto LAB_073d2838;
LAB_073d2800:
                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar10 = (**(code **)(*plVar16 + 0x1b8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
                    *(undefined8 *)(lVar11 + 0x18) = uVar10;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    if (bVar29) goto LAB_073d2800;
LAB_073d2838:
                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar17 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar10 = (**(code **)(*plVar17 + 0x2f8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x300));
                    uVar15 = (**(code **)(*plVar16 + 0x1b8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
                    uVar10 = System_String__Concat(uVar10,DAT_091f8f68,uVar15,0);
                    *(undefined8 *)(lVar11 + 0x18) = uVar10;
                    thunk_FUN_03f5d7b8();
                  }
                  if (iVar5 == 0x7fffffff) {
                    uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar10,DAT_091d5080);
                  }
                  *(int *)(lVar11 + 0x14) = iVar5;
                  MessagePack_Internal_ObjectSerializationInfo_<>c__DisplayClass27_0__<CreateOrNull>g__AddEmittableMemberOrIgnore_0
                            (lVar7,bVar1 & 1,lVar11,0);
                  bVar29 = false;
                  iVar5 = iVar5 + 1;
                }
                goto LAB_073d2720;
              }
              if (local_78 != (long *)0x0) {
                lVar11 = *local_78;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 != 0) {
                  piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == DAT_09185a58) {
                      puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
                      goto LAB_073d293c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar9 != 0);
                }
                puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_073d293c:
                (*(code *)*puVar25)(plVar16,puVar25[1]);
              }
            } while (local_70 != (long *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
  goto LAB_073d3ff8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar26 = piVar26 + 4;
    if (uVar9 == 0) break;
LAB_073d2a68:
    if (*(long *)(piVar26 + -2) == DAT_09185a58) {
      puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_073d2a9c;
    }
  }
LAB_073d2a80:
  puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185a58,0);
LAB_073d2a9c:
  (*(code *)*puVar25)(plVar16,puVar25[1]);
LAB_073d2aa8:
  if (local_d8 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  goto LAB_073d2f08;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar26 = piVar26 + 4;
    if (uVar9 == 0) break;
LAB_073d2eb8:
    if (*(long *)(piVar26 + -2) == DAT_09185a58) {
      puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_073d2eec;
    }
  }
LAB_073d2ed0:
  puVar25 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_073d2eec:
  (*(code *)*puVar25)(plVar16,puVar25[1]);
LAB_073d2f08:
  uVar10 = (**(code **)(*plVar8 + 0x9e8))(plVar8,*(undefined8 *)(*plVar8 + 0x9f0));
  if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09192e58);
  }
  puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
  lVar11 = puVar25[3];
  if (lVar11 == 0) {
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
      puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    }
    uVar15 = *puVar25;
    lVar11 = thunk_FUN_03f9944c(DAT_091785f8);
    FUN_05322d94(lVar11,uVar15,DAT_091ede08,0);
    plVar16 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x18);
    *plVar16 = lVar11;
    thunk_FUN_03f5d7b8(plVar16,lVar11);
  }
  plVar16 = (long *)FUN_04b01688(uVar10,lVar11,DAT_091caa90);
  local_68 = plVar16;
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ac0);
  }
  uVar9 = System_Reflection_ConstructorInfo__op_Equality(plVar16,0,0);
  plVar16 = (long *)0x0;
  if ((uVar9 & 1) != 0) {
    uVar10 = (**(code **)(*plVar8 + 0x9e8))(plVar8,*(undefined8 *)(*plVar8 + 0x9f0));
    uVar15 = thunk_FUN_03f9944c(DAT_091785f8);
    FUN_05322d94(uVar15,lVar7,DAT_091ede48,0);
    uVar10 = FUN_04b0cafc(uVar10,uVar15,DAT_091cb418);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar11 = puVar25[4];
    if (lVar11 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar11 = thunk_FUN_03f9944c(DAT_09178600);
      FUN_053239c8(lVar11,uVar15,DAT_091ede10,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x20);
      *plVar8 = lVar11;
      thunk_FUN_03f5d7b8(plVar8,lVar11);
    }
    plVar8 = (long *)FUN_04aeb234(uVar10,lVar11,DAT_091ca130);
    if (plVar8 == (long *)0x0) goto LAB_073d3ff8;
    lVar11 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == DAT_0917a3d8) {
          puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_073d3164;
        }
        uVar9 = uVar9 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar9 != 0);
    }
    puVar25 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3d8,0);
LAB_073d3164:
    plVar16 = (long *)(*(code *)*puVar25)(plVar8,puVar25[1]);
    if (plVar16 == (long *)0x0) goto LAB_073d3ff8;
    lVar11 = *plVar16;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == DAT_09185b10) {
          puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_073d31cc;
        }
        uVar9 = uVar9 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar9 != 0);
    }
    puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_09185b10,0);
LAB_073d31cc:
    uVar9 = (*(code *)*puVar25)(plVar16,puVar25[1]);
    if ((uVar9 & 1) != 0) {
      lVar11 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar26 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == DAT_0917aa80) {
            puVar25 = (undefined8 *)(lVar11 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_073d3230;
          }
          uVar9 = uVar9 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar9 != 0);
      }
      puVar25 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917aa80,0);
LAB_073d3230:
      local_68 = (long *)(*(code *)*puVar25)(plVar16,puVar25[1]);
    }
  }
  plVar8 = local_68;
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Reflection_ConstructorInfo__op_Equality(plVar8,0,0);
  if (((uVar2 | uVar4 ^ 0xffffffff) & 1) == 0) {
    FUN_039b1d98(lVar7);
    plVar8 = *(long **)(lVar7 + 0x20);
    FUN_039b1d98(plVar8);
    uVar10 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
    puVar21 = &DAT_09218848;
LAB_073d4354:
    uVar15 = thunk_FUN_03fc39d4(puVar21);
    uVar10 = System_String__Concat(uVar15,uVar10,0);
LAB_073d4364:
    thunk_FUN_03fc39d4(&DAT_09188158);
    uVar15 = thunk_FUN_03f9944c();
    MessagePack_Internal_MessagePackDynamicObjectResolverException___ctor(uVar15,uVar10);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d5080);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar15,uVar10);
  }
  lVar11 = thunk_FUN_03f9944c(DAT_0917d5f0);
  FUN_057e0400(lVar11,DAT_091b34c8);
  if (local_68 != (long *)0x0) {
    lVar12 = *plVar13;
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar18 = puVar25[5];
    if (lVar18 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar10 = *puVar25;
      lVar18 = thunk_FUN_03f9944c(DAT_09178090);
      FUN_05305d48(lVar18,uVar10,DAT_091eddc8,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x28);
      *plVar8 = lVar18;
      thunk_FUN_03f5d7b8(plVar8,lVar18);
    }
    uVar10 = FUN_04aea454(lVar12,lVar18,DAT_091c9f90);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar12 = puVar25[6];
    if (lVar12 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar12 = thunk_FUN_03f9944c(DAT_09179550);
      FUN_0532bc28(lVar12,uVar15,DAT_091eddd0,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x30);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    uVar10 = FUN_04aebda0(uVar10,lVar12,DAT_091ca1a8);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar12 = puVar25[7];
    if (lVar12 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar12 = thunk_FUN_03f9944c(DAT_09178320);
      FUN_0530e450(lVar12,uVar15,DAT_091eddd8,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x38);
      *plVar8 = lVar12;
      thunk_FUN_03f5d7b8(plVar8,lVar12);
    }
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar18 = puVar25[8];
    if (lVar18 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar18 = thunk_FUN_03f9944c(DAT_09178328);
      FUN_0530e66c(lVar18,uVar15,DAT_091edde0,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x40);
      *plVar8 = lVar18;
      thunk_FUN_03f5d7b8(plVar8,lVar18);
    }
    plVar8 = (long *)FUN_04b0507c(uVar10,lVar12,lVar18,DAT_091cb028);
    lVar12 = *plVar14;
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar18 = puVar25[9];
    if (lVar18 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar10 = *puVar25;
      lVar18 = thunk_FUN_03f9944c(DAT_09178168);
      FUN_053093b8(lVar18,uVar10,DAT_091edde8,0);
      plVar17 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x48);
      *plVar17 = lVar18;
      thunk_FUN_03f5d7b8(plVar17,lVar18);
    }
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar27 = puVar25[10];
    if (lVar27 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar10 = *puVar25;
      lVar27 = thunk_FUN_03f9944c(DAT_09178160);
      FUN_053087c4(lVar27,uVar10,DAT_091eddf0,0);
      plVar17 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x50);
      *plVar17 = lVar27;
      thunk_FUN_03f5d7b8(plVar17,lVar27);
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517140 == '\0') {
      FUN_03f5c2a4(&DAT_0918b378);
      DAT_09517140 = '\x01';
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar17 = (long *)FUN_04b08d7c(lVar12,lVar18,lVar27,
                                   *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18),
                                   DAT_091cb330);
    lVar12 = *plVar14;
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar18 = puVar25[0xb];
    if (lVar18 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar10 = *puVar25;
      lVar18 = thunk_FUN_03f9944c(DAT_09178168);
      FUN_053093b8(lVar18,uVar10,DAT_091eddf8,0);
      plVar19 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x58);
      *plVar19 = lVar18;
      thunk_FUN_03f5d7b8(plVar19,lVar18);
    }
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar27 = puVar25[0xc];
    if (lVar27 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar10 = *puVar25;
      lVar27 = thunk_FUN_03f9944c(DAT_09178160);
      FUN_053087c4(lVar27,uVar10,DAT_091ede00,0);
      plVar19 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x60);
      *plVar19 = lVar27;
      thunk_FUN_03f5d7b8(plVar19,lVar27);
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517140 == '\0') {
      FUN_03f5c2a4(&DAT_0918b378);
      DAT_09517140 = '\x01';
    }
    if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar19 = (long *)FUN_04b08d7c(lVar12,lVar18,lVar27,
                                   *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18),
                                   DAT_091cb330);
    if (lVar11 == 0) goto LAB_073d3ff8;
    do {
      iVar5 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (0 < iVar5) {
        System_Array__Clear(*(undefined8 *)(lVar11 + 0x10),0,iVar5,0);
      }
      local_84 = 0;
      if ((local_68 == (long *)0x0) ||
         (lVar12 = (**(code **)(*local_68 + 600))(local_68,*(undefined8 *)(*local_68 + 0x260)),
         lVar12 == 0)) goto LAB_073d3ff8;
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar9 = 0;
        uVar24 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          iVar5 = local_84;
          if (uVar24 <= uVar9) goto LAB_073d3ffc;
          plVar30 = *(long **)(lVar12 + uVar9 * 8 + 0x20);
          if ((bVar1 & 1) != 0) {
            if (plVar8 == (long *)0x0) goto LAB_073d3ff8;
            lVar18 = *plVar8;
            uVar24 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar24 != 0) {
              piVar26 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == DAT_0917b440) {
                  puVar25 = (undefined8 *)(lVar18 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                  goto LAB_073d3948;
                }
                uVar24 = uVar24 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar24 != 0);
            }
            puVar25 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b440,1);
LAB_073d3948:
            uVar24 = (*(code *)*puVar25)(plVar8,iVar5,&local_90,puVar25[1]);
            if ((uVar24 & 1) == 0) {
              if (plVar16 == (long *)0x0) {
                FUN_039b1d98(lVar7);
                plVar8 = *(long **)(lVar7 + 0x20);
                FUN_039b1d98(plVar8);
                uVar10 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
                uVar15 = System_Int32__ToString(&local_84,0);
                uVar22 = thunk_FUN_03fc39d4(&DAT_09218830);
                puVar21 = &DAT_091f6900;
                goto LAB_073d42bc;
              }
              goto LAB_073d3c38;
            }
            if ((plVar30 == (long *)0x0) ||
               (uVar10 = (**(code **)(*plVar30 + 0x1e8))(plVar30,*(undefined8 *)(*plVar30 + 0x1f0)),
               local_90 == 0)) goto LAB_073d3ff8;
            uVar15 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                               (local_90);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar24 = System_Type__op_Equality(uVar10,uVar15,0);
            if ((uVar24 & 1) == 0) {
              uVar10 = (**(code **)(*plVar30 + 0x1e8))(plVar30,*(undefined8 *)(*plVar30 + 0x1f0));
              plVar20 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar10,0);
              if ((local_90 == 0) ||
                 (uVar10 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                     (local_90), plVar20 == (long *)0x0)) goto LAB_073d3ff8;
              uVar24 = (**(code **)(*plVar20 + 0x2b8))
                                 (plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x2c0));
              if ((uVar24 & 1) != 0) goto LAB_073d3a08;
            }
            else {
LAB_073d3a08:
              if (local_90 == 0) goto LAB_073d3ff8;
              if (*(char *)(local_90 + 0x12) != '\0') goto LAB_073d3b58;
            }
            if (plVar16 != (long *)0x0) goto LAB_073d3c38;
            uVar10 = thunk_FUN_03fc39d4(&DAT_091805f8);
            uVar10 = FUN_03f5c394(uVar10,6);
            FUN_039b1d98();
            uVar15 = thunk_FUN_03fc39d4(&DAT_09218838);
            FUN_039af17c(uVar10,0,uVar15);
            FUN_039b1d98(lVar7);
            plVar8 = *(long **)(lVar7 + 0x20);
            FUN_039b1d98(plVar8);
            uVar15 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
            FUN_039af17c(uVar10,1,uVar15);
            uVar15 = thunk_FUN_03fc39d4(&DAT_091f6900);
            FUN_039af17c(uVar10,2,uVar15);
            uVar15 = System_Int32__ToString(&local_84,0);
LAB_073d4180:
            FUN_039af17c(uVar10,3,uVar15);
            uVar15 = thunk_FUN_03fc39d4(&DAT_091f6910);
            FUN_039af17c(uVar10,4,uVar15);
            FUN_039b1d98(plVar30);
            plVar8 = (long *)(**(code **)(*plVar30 + 0x1e8))
                                       (plVar30,*(undefined8 *)(*plVar30 + 0x1f0));
            FUN_039b1d98();
            uVar15 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            FUN_039af17c(uVar10,5,uVar15);
            uVar10 = System_String__Concat(uVar10,0);
            goto LAB_073d4364;
          }
          if ((plVar30 == (long *)0x0) ||
             (uVar10 = (**(code **)(*plVar30 + 0x1d8))(plVar30,*(undefined8 *)(*plVar30 + 0x1e0)),
             plVar17 == (long *)0x0)) goto LAB_073d3ff8;
          lVar18 = *plVar17;
          uVar24 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar24 != 0) {
            piVar26 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == DAT_0917b160) {
                puVar25 = (undefined8 *)(lVar18 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_073d3a28;
              }
              uVar24 = uVar24 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar24 != 0);
          }
          puVar25 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b160,0);
LAB_073d3a28:
          uVar10 = (*(code *)*puVar25)(plVar17,uVar10,puVar25[1]);
          uVar15 = (**(code **)(*plVar30 + 0x1d8))(plVar30,*(undefined8 *)(*plVar30 + 0x1e0));
          if (plVar19 == (long *)0x0) goto LAB_073d3ff8;
          lVar18 = *plVar19;
          uVar24 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar24 != 0) {
            piVar26 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == DAT_0917b160) {
                puVar25 = (undefined8 *)(lVar18 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_073d3aa8;
              }
              uVar24 = uVar24 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar24 != 0);
          }
          puVar25 = (undefined8 *)FUN_03f95da8(plVar19,DAT_0917b160,0);
LAB_073d3aa8:
          uVar15 = (*(code *)*puVar25)(plVar19,uVar15,puVar25[1]);
          iVar5 = FUN_04ad6dc8(uVar10,DAT_091c9730);
          iVar6 = FUN_04ad6dc8(uVar15,DAT_091c9730);
          if (iVar6 == 0 && iVar5 == 0) {
            if (plVar16 == (long *)0x0) {
              FUN_039b1d98(lVar7);
              plVar8 = *(long **)(lVar7 + 0x20);
              FUN_039b1d98(plVar8);
              uVar10 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
              FUN_039b1d98(plVar30);
              uVar15 = (**(code **)(*plVar30 + 0x1d8))(plVar30,*(undefined8 *)(*plVar30 + 0x1e0));
              uVar22 = thunk_FUN_03fc39d4(&DAT_09218830);
              puVar21 = &DAT_091f6908;
LAB_073d42bc:
              uVar23 = thunk_FUN_03fc39d4(puVar21);
              uVar10 = System_String__Concat(uVar22,uVar10,uVar23,uVar15,0);
              goto LAB_073d4364;
            }
LAB_073d3c38:
            local_68 = (long *)0x0;
            break;
          }
          if (iVar6 != 0 && iVar5 == 0) {
            uVar10 = uVar15;
          }
          FUN_04adf154(uVar10,DAT_091c9a08);
          local_90 = extraout_x1;
          plVar20 = (long *)(**(code **)(*plVar30 + 0x1e8))
                                      (plVar30,*(undefined8 *)(*plVar30 + 0x1f0));
          if ((local_90 == 0) ||
             (uVar10 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                 (local_90), plVar20 == (long *)0x0)) goto LAB_073d3ff8;
          uVar24 = (**(code **)(*plVar20 + 0x2b8))(plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x2c0))
          ;
          if ((uVar24 & 1) == 0) {
LAB_073d3c08:
            if (plVar16 == (long *)0x0) {
              uVar10 = thunk_FUN_03fc39d4(&DAT_091805f8);
              uVar10 = FUN_03f5c394(uVar10,6);
              FUN_039b1d98();
              uVar15 = thunk_FUN_03fc39d4(&DAT_09218838);
              FUN_039af17c(uVar10,0,uVar15);
              FUN_039b1d98(lVar7);
              plVar8 = *(long **)(lVar7 + 0x20);
              FUN_039b1d98(plVar8);
              uVar15 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
              FUN_039af17c(uVar10,1,uVar15);
              uVar15 = thunk_FUN_03fc39d4(&DAT_091f6908);
              FUN_039af17c(uVar10,2,uVar15);
              FUN_039b1d98(plVar30);
              uVar15 = (**(code **)(*plVar30 + 0x1d8))(plVar30,*(undefined8 *)(*plVar30 + 0x1e0));
              goto LAB_073d4180;
            }
            goto LAB_073d3c38;
          }
          if (local_90 == 0) goto LAB_073d3ff8;
          if (*(char *)(local_90 + 0x12) == '\0') goto LAB_073d3c08;
LAB_073d3b58:
          lVar18 = local_90;
          uVar10 = thunk_FUN_03f9944c(DAT_09192e88);
          MessagePack_Internal_ObjectSerializationInfo_EmittableMemberAndConstructorParameter___ctor
                    (uVar10,lVar18,plVar30);
          lVar18 = DAT_091b34d0;
          lVar27 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar27 == 0) goto LAB_073d3ff8;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            puVar25 = (undefined8 *)(lVar27 + (long)(int)uVar2 * 8 + 0x20);
            *puVar25 = uVar10;
            thunk_FUN_03f5d7b8(puVar25,uVar10);
          }
          else {
            FUN_057e0c68(lVar11,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          if (local_84 == 0x7fffffff) {
            uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,DAT_091d5080);
          }
          uVar24 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar9 = uVar9 + 1;
          local_84 = local_84 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      uVar9 = MessagePack_Internal_ObjectSerializationInfo__TryGetNextConstructor(plVar16,&local_68)
      ;
      plVar30 = local_68;
    } while ((uVar9 & 1) != 0);
    if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Reflection_ConstructorInfo__op_Equality(plVar30,0,0);
    if ((uVar9 & 1) != 0) {
      FUN_039b1d98(lVar7);
      plVar8 = *(long **)(lVar7 + 0x20);
      FUN_039b1d98(plVar8);
      uVar10 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
      puVar21 = &DAT_09218840;
      goto LAB_073d4354;
    }
  }
  if ((bVar1 & 1) == 0) {
    if (*plVar14 == 0) goto LAB_073d3ff8;
    uVar10 = FUN_06fd8278(*plVar14,DAT_091a0468);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar7 = puVar25[0xe];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar7 = thunk_FUN_03f9944c(DAT_091794c8);
      FUN_053239c8(lVar7,uVar15,DAT_091ede20,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x70);
      *plVar8 = lVar7;
      goto LAB_073d3dc4;
    }
  }
  else {
    if (*plVar13 == 0) goto LAB_073d3ff8;
    uVar10 = FUN_06ef0310(*plVar13,DAT_0919e158);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09192e58);
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar7 = puVar25[0xd];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09192e58);
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar7 = thunk_FUN_03f9944c(DAT_091794c8);
      FUN_053239c8(lVar7,uVar15,DAT_091ede18,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x68);
      *plVar8 = lVar7;
LAB_073d3dc4:
      thunk_FUN_03f5d7b8(plVar8,lVar7);
    }
  }
  uVar10 = FUN_04aeab54(uVar10,lVar7,DAT_091ca0c8);
  uVar10 = FUN_04b049e4(uVar10,DAT_091caf80);
  if (lVar11 != 0) {
    FUN_057e185c(&local_d8,lVar11,DAT_091b34e0);
    pplStack_a8 = pplStack_d0;
    local_b0 = local_d8;
    local_a0 = local_c8;
    local_d8 = (long *)0x0;
    pplStack_d0 = &local_b0;
    while (uVar9 = FUN_071bd28c(&local_b0,DAT_091a5680), (uVar9 & 1) != 0) {
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_a0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(*(long *)(local_a0 + 0x10) + 0x11) = 1;
    }
    FUN_071bd288(&local_b0,DAT_091a5678);
    if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
    lVar7 = puVar25[0xf];
    if (lVar7 == 0) {
      if (*(int *)(DAT_09192e58 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar25 = *(undefined8 **)(DAT_09192e58 + 0xb8);
      }
      uVar15 = *puVar25;
      lVar7 = thunk_FUN_03f9944c(DAT_091794c0);
      FUN_05322d94(lVar7,uVar15,DAT_091ede28,0);
      plVar8 = (long *)(*(long *)(DAT_09192e58 + 0xb8) + 0x78);
      *plVar8 = lVar7;
      thunk_FUN_03f5d7b8(plVar8,lVar7);
    }
    uVar10 = FUN_04b0cafc(uVar10,lVar7,DAT_091cb640);
    lVar7 = FUN_04b049e4(uVar10,DAT_091caf80);
    if (lVar7 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      bVar29 = 0 < (int)uVar2;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
LAB_073d3ffc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar12 = *(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_073d3ff8;
          MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type(lVar12);
          uVar9 = MessagePack_Internal_ObjectSerializationInfo__IsOptimizeTargetType();
          if (((uVar9 & 1) == 0) &&
             (lVar12 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__GetMessagePackFormatterAttribute
                                 (lVar12), lVar12 == 0)) break;
          uVar2 = *(uint *)(lVar7 + 0x18);
          uVar4 = uVar4 + 1;
          bVar29 = (int)uVar4 < (int)uVar2;
        } while ((int)uVar4 < (int)uVar2);
      }
      lVar12 = *plVar28;
      uVar10 = FUN_057e28a4(lVar11,DAT_091b34e8);
      plVar8 = local_68;
      lVar11 = thunk_FUN_03f9944c(DAT_09188b58);
      MessagePack_Internal_ObjectSerializationInfo___ctor
                (lVar11,lVar12,uVar10,lVar7,local_fc,plVar8,bVar1 & 1);
      if (lVar11 != 0) {
        *(bool *)(lVar11 + 0x1a) = bVar29;
        return lVar11;
      }
    }
  }
LAB_073d3ff8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

