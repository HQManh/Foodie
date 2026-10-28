// rea decompile_all
// name: DG.Tweening.DOTweenPath$$Awake
// address: 0x455b6e8
// body: available
// range: 0x455b6e8-0x455c477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455c45c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455c460 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455c46c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455c474 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenPath__Awake
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  if ((DAT_09518800 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54e8);
    FUN_03f5c2a4(&DAT_091c71d0);
    FUN_03f5c2a4(&DAT_091831b0);
    FUN_03f5c2a4(&DAT_091831c8);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1178);
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091b7638);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188f68);
    FUN_03f5c2a4(&DAT_091d5850);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc70);
    FUN_03f5c2a4(&DAT_091dbcb0);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_091dbd08);
    FUN_03f5c2a4(&DAT_091dbd38);
    FUN_03f5c2a4(&DAT_091dbd60);
    FUN_03f5c2a4(&DAT_091dbd78);
    FUN_03f5c2a4(&DAT_091dbd90);
    FUN_03f5c2a4(&DAT_091dbdb0);
    FUN_03f5c2a4(&DAT_091dbdf0);
    FUN_03f5c2a4(&DAT_091dbe10);
    FUN_03f5c2a4(&DAT_091dbe40);
    FUN_03f5c2a4(&DAT_091dbea0);
    FUN_03f5c2a4(&DAT_091dbe98);
    FUN_03f5c2a4(&DAT_091dbee8);
    FUN_03f5c2a4(&DAT_091dbf28);
    FUN_03f5c2a4(&DAT_091dbf60);
    FUN_03f5c2a4(&DAT_091dbfb8);
    FUN_03f5c2a4(&DAT_091dc020);
    FUN_03f5c2a4(&DAT_0917f038);
    FUN_03f5c2a4(&DAT_091ddc60);
    FUN_03f5c2a4(&DAT_091ff830);
    FUN_03f5c2a4(&DAT_091ffc60);
    DAT_09518800 = 1;
  }
  lVar3 = *(long *)(param_4 + 0x100);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_4 + 0xf0) == 0) goto LAB_0455c45c;
  if (*(int *)(*(long *)(param_4 + 0xf0) + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_4 + 0x108) == 3) {
    return;
  }
  if (*(long *)(*(long *)(DAT_091831b0 + 0xb8) + 8) == 0) {
    if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DG_Tweening_Core_DOTweenUtils__GetLooseScriptType(DAT_091ffc60,0);
    if (lVar3 == 0) goto LAB_0455c45c;
    uVar4 = System_Type__GetMethod(lVar3,DAT_091ff830,0x18,0);
    puVar10 = (undefined8 *)(*(long *)(DAT_091831b0 + 0xb8) + 8);
    *puVar10 = uVar4;
    thunk_FUN_03f5d7b8(puVar10,uVar4);
    lVar3 = *(long *)(param_4 + 0x100);
    if (lVar3 == 0) goto LAB_0455c45c;
  }
  DG_Tweening_Plugins_Core_PathCore_Path__AssignDecoder(lVar3,*(undefined4 *)(lVar3 + 0x20),0);
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_0918c158 + 0xb8) != '\0') {
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar14 = *(undefined8 *)(param_4 + 0x100);
    lVar13 = *(long *)(*(long *)(DAT_09183190 + 0xb8) + 0x88);
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,uVar14,DAT_091d5850,0);
    lVar3 = DAT_091b1178;
    if (lVar13 == 0) goto LAB_0455c45c;
    lVar11 = *(long *)(lVar13 + 0x10);
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0455c45c;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar4;
      thunk_FUN_03f5d7b8(puVar10,uVar4);
    }
    else {
      FUN_057e0c68(lVar13,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *(long *)(param_4 + 0x100);
    if (lVar3 == 0) goto LAB_0455c45c;
    uVar4 = *(undefined8 *)(param_4 + 0x124);
    *(undefined8 *)(lVar3 + 0x114) = *(undefined8 *)(param_4 + 300);
    *(undefined8 *)(lVar3 + 0x10c) = uVar4;
  }
  if (*(char *)(param_4 + 0xbb) != '\0') {
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 == 0) goto LAB_0455c45c;
    uVar4 = UnityEngine_Transform__GetParent(lVar3,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = UnityEngine_Transform__GetParent(lVar3,0);
      if (lVar3 == 0) goto LAB_0455c45c;
      fVar15 = (float)UnityEngine_Transform__get_position(lVar3,0);
      lVar3 = *(long *)(param_4 + 0x100);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_0455c45c;
      uVar5 = *(ulong *)(*(long *)(lVar3 + 0x18) + 0x18);
      if (0 < (int)uVar5) {
        uVar12 = 0;
        lVar3 = 0x20;
        do {
          if ((*(long *)(param_4 + 0x100) == 0) ||
             (lVar13 = *(long *)(*(long *)(param_4 + 0x100) + 0x18), lVar13 == 0))
          goto LAB_0455c45c;
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_0455c460;
          puVar10 = (undefined8 *)(lVar13 + lVar3);
          uVar12 = uVar12 + 1;
          lVar3 = lVar3 + 0xc;
          *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) - param_2,(float)*puVar10 - fVar15);
          *(float *)(puVar10 + 1) = *(float *)(puVar10 + 1) - param_3;
        } while ((uVar5 & 0xffffffff) != uVar12);
        lVar3 = *(long *)(param_4 + 0x100);
        if (lVar3 == 0) goto LAB_0455c45c;
      }
      if (*(long *)(lVar3 + 0x30) == 0) goto LAB_0455c45c;
      uVar5 = *(ulong *)(*(long *)(lVar3 + 0x30) + 0x18);
      if (0 < (int)uVar5) {
        uVar12 = 0;
        lVar3 = 0x20;
        do {
          if ((*(long *)(param_4 + 0x100) == 0) ||
             (lVar13 = *(long *)(*(long *)(param_4 + 0x100) + 0x30), lVar13 == 0))
          goto LAB_0455c45c;
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_0455c460;
          puVar10 = (undefined8 *)(lVar13 + lVar3);
          uVar12 = uVar12 + 1;
          lVar3 = lVar3 + 0x18;
          puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) - fVar15,
                                (float)puVar10[1] - param_3);
          *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) - param_2,(float)*puVar10 - fVar15);
          puVar10[2] = CONCAT44((float)((ulong)puVar10[2] >> 0x20) - param_3,
                                (float)puVar10[2] - param_2);
        } while ((uVar5 & 0xffffffff) != uVar12);
      }
    }
  }
  if (*(char *)(param_4 + 0xba) != '\0') {
    DG_Tweening_DOTweenPath__ReEvaluateRelativeTween(param_4);
  }
  if (*(int *)(param_4 + 0xc4) == 1) {
    uVar4 = FUN_04a6a14c(param_4,DAT_091c54e8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_4 + 0xc4) = 2;
    }
  }
  lVar3 = *(long *)(*(long *)(DAT_091831b0 + 0xb8) + 8);
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,6);
  if (plVar6 == (long *)0x0) {
LAB_0455c45c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar13 = thunk_FUN_03f99350(param_4,*(undefined8 *)(*plVar6 + 0x40));
  if (lVar13 == 0) {
LAB_0455c464:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = param_4;
    thunk_FUN_03f5d7b8(plVar6 + 4,param_4);
    local_44[0] = *(undefined1 *)(param_4 + 0xe8);
    lVar13 = FUN_03f5c42c(DAT_09535400,local_44);
    if ((lVar13 != 0) &&
       (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
    goto LAB_0455c464;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar13;
      thunk_FUN_03f5d7b8(plVar6 + 5,lVar13);
      local_48[0] = *(undefined1 *)(param_4 + 0xbb);
      lVar13 = FUN_03f5c42c(DAT_09535400,local_48);
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
      goto LAB_0455c464;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar13;
        thunk_FUN_03f5d7b8(plVar6 + 6,lVar13);
        lVar13 = *(long *)(param_4 + 0x100);
        if ((lVar13 != 0) &&
           (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
        goto LAB_0455c464;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
          plVar6[7] = lVar13;
          thunk_FUN_03f5d7b8(plVar6 + 7,lVar13);
          local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_4 + 0x74));
          lVar13 = FUN_03f5c42c(DAT_09535450,&local_60);
          if ((lVar13 != 0) &&
             (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
          goto LAB_0455c464;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar13;
            thunk_FUN_03f5d7b8(plVar6 + 8,lVar13);
            local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_4 + 0xc4));
            lVar13 = FUN_03f5c42c(DAT_09188f68,&local_70);
            if ((lVar13 != 0) &&
               (lVar11 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
            goto LAB_0455c464;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar13;
              thunk_FUN_03f5d7b8(plVar6 + 9,lVar13);
              if (lVar3 != 0) {
                plVar6 = (long *)System_Reflection_MethodBase__Invoke(lVar3,0,plVar6,0);
                if (plVar6 != (long *)0x0) {
                  if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0917f038 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) +
                                (ulong)*(byte *)(DAT_0917f038 + 0x130) * 8 + -8) != DAT_0917f038)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(plVar6);
                  }
                }
                DG_Tweening_TweenSettingsExtensions__SetOptions
                          (plVar6,*(undefined1 *)(param_4 + 0xbc),0,*(undefined4 *)(param_4 + 200),0
                          );
                iVar1 = *(int *)(param_4 + 0x9c);
                if (iVar1 == 1) {
                  uVar16 = *(undefined4 *)(param_4 + 0xb4);
                  if (*(char *)(param_4 + 0xcc) == '\0') {
                    uVar4 = 0;
                    uVar14 = 0;
                    uVar7 = 0;
                    uVar8 = 0;
                  }
                  else {
                    local_60 = 0;
                    uStack_58 = 0;
                    FUN_05c3a618(*(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4),
                                 *(undefined4 *)(param_4 + 0xd8),&local_60,DAT_091b7638);
                    local_70 = 0;
                    uStack_68 = 0;
                    FUN_05c3a618(*(undefined4 *)(param_4 + 0xdc),*(undefined4 *)(param_4 + 0xe0),
                                 *(undefined4 *)(param_4 + 0xe4),&local_70,DAT_091b7638);
                    uVar4 = local_60;
                    uVar14 = uStack_58;
                    uVar7 = local_70;
                    uVar8 = uStack_68;
                  }
                  DG_Tweening_TweenSettingsExtensions__SetLookAt
                            (uVar16,plVar6,uVar4,uVar14,uVar7,uVar8,0);
                }
                else if (iVar1 == 3) {
                  uVar18 = *(undefined4 *)(param_4 + 0xa8);
                  uVar17 = *(undefined4 *)(param_4 + 0xac);
                  uVar16 = *(undefined4 *)(param_4 + 0xb0);
                  if (*(char *)(param_4 + 0xcc) == '\0') {
                    uVar4 = 0;
                    uVar14 = 0;
                    uVar7 = 0;
                    uVar8 = 0;
                  }
                  else {
                    local_60 = 0;
                    uStack_58 = 0;
                    FUN_05c3a618(*(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4),
                                 *(undefined4 *)(param_4 + 0xd8),&local_60,DAT_091b7638);
                    local_70 = 0;
                    uStack_68 = 0;
                    FUN_05c3a618(*(undefined4 *)(param_4 + 0xdc),*(undefined4 *)(param_4 + 0xe0),
                                 *(undefined4 *)(param_4 + 0xe4),&local_70,DAT_091b7638);
                    uVar4 = local_60;
                    uVar14 = uStack_58;
                    uVar7 = local_70;
                    uVar8 = uStack_68;
                  }
                  DG_Tweening_TweenSettingsExtensions__SetLookAt
                            (uVar18,uVar17,uVar16,plVar6,uVar4,uVar14,uVar7,uVar8,0);
                }
                else if (iVar1 == 2) {
                  uVar4 = *(undefined8 *)(param_4 + 0xa0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
                  if ((uVar5 & 1) != 0) {
                    uVar4 = *(undefined8 *)(param_4 + 0xa0);
                    if (*(char *)(param_4 + 0xcc) == '\0') {
                      uVar14 = 0;
                      uVar7 = 0;
                      uVar8 = 0;
                      uVar9 = 0;
                    }
                    else {
                      local_60 = 0;
                      uStack_58 = 0;
                      FUN_05c3a618(*(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4),
                                   *(undefined4 *)(param_4 + 0xd8),&local_60,DAT_091b7638);
                      local_70 = 0;
                      uStack_68 = 0;
                      FUN_05c3a618(*(undefined4 *)(param_4 + 0xdc),*(undefined4 *)(param_4 + 0xe0),
                                   *(undefined4 *)(param_4 + 0xe4),&local_70,DAT_091b7638);
                      uVar14 = local_60;
                      uVar7 = uStack_58;
                      uVar8 = local_70;
                      uVar9 = uStack_68;
                    }
                    DG_Tweening_TweenSettingsExtensions__SetLookAt
                              (plVar6,uVar4,uVar14,uVar7,uVar8,uVar9,0);
                  }
                }
                uVar4 = UnityEngine_Component__get_gameObject(param_4,0);
                FUN_04d9642c(plVar6,uVar4,DAT_091dbfb8);
                uVar4 = FUN_04d95c7c(*(undefined4 *)(param_4 + 0x70),plVar6,DAT_091dbe40);
                uVar4 = FUN_04d962f4(uVar4,*(undefined4 *)(param_4 + 0x88),
                                     *(undefined4 *)(param_4 + 0x98),DAT_091dbf28);
                uVar4 = FUN_04d95c58(uVar4,*(undefined1 *)(param_4 + 0xb9),DAT_091dbe10);
                uVar4 = FUN_04d96618(uVar4,*(undefined4 *)(param_4 + 0x20),DAT_091dc020);
                uVar14 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar14,param_4,DAT_091c71d0,0);
                FUN_04d956e8(uVar4,uVar14,DAT_091dbd38);
                if (*(char *)(param_4 + 0x24) != '\0') {
                  FUN_04d963e4(plVar6,DAT_091dbf60);
                }
                if (*(int *)(param_4 + 0x78) == 0x25) {
                  FUN_04d95dc4(plVar6,*(undefined8 *)(param_4 + 0x80),DAT_091dbe98);
                }
                else {
                  FUN_04d95e8c(plVar6,*(int *)(param_4 + 0x78),DAT_091dbea0);
                }
                uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(param_4 + 0x90),0);
                if ((uVar5 & 1) == 0) {
                  FUN_04d96054(plVar6,*(undefined8 *)(param_4 + 0x90),DAT_091dbee8);
                }
                if (*(char *)(param_4 + 0x25) == '\0') {
                  *(undefined8 *)(param_4 + 0x30) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x30,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x30);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d95798(plVar6,uVar4,DAT_091dbd90);
                  }
                }
                if (*(char *)(param_4 + 0x26) == '\0') {
                  *(undefined8 *)(param_4 + 0x38) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x38,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x38);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d95740(plVar6,uVar4,DAT_091dbd60);
                  }
                }
                if (*(char *)(param_4 + 0x27) == '\0') {
                  *(undefined8 *)(param_4 + 0x40) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x40,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x40);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d957f0(plVar6,uVar4,DAT_091dbdf0);
                  }
                }
                if (*(char *)(param_4 + 0x28) == '\0') {
                  *(undefined8 *)(param_4 + 0x48) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x48,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x48);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d957c4(plVar6,uVar4,DAT_091dbdb0);
                  }
                }
                if (*(char *)(param_4 + 0x29) == '\0') {
                  *(undefined8 *)(param_4 + 0x50) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x50,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x50);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d956bc(plVar6,uVar4,DAT_091dbd08);
                  }
                }
                if (*(char *)(param_4 + 0x2b) == '\0') {
                  *(undefined8 *)(param_4 + 0x60) = 0;
                  thunk_FUN_03f5d7b8(param_4 + 0x60,0);
                }
                else {
                  lVar3 = *(long *)(param_4 + 0x60);
                  if (lVar3 != 0) {
                    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
                    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091ddc60,0);
                    FUN_04d9576c(plVar6,uVar4,DAT_091dbd78);
                  }
                }
                if (*(char *)(param_4 + 0xb8) == '\0') {
                  FUN_04d8dc1c(plVar6,DAT_091dbc70);
                }
                else {
                  FUN_04d8dd74(plVar6,DAT_091dbcb0);
                }
                *(long *)(param_4 + 0x68) = (long)plVar6;
                thunk_FUN_03f5d7b8((long *)(param_4 + 0x68),plVar6);
                if (*(char *)(param_4 + 0x2a) == '\0') {
                  return;
                }
                if (*(long *)(param_4 + 0x58) == 0) {
                  return;
                }
                UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_4 + 0x58),0);
                return;
              }
              goto LAB_0455c45c;
            }
          }
        }
      }
    }
  }
LAB_0455c460:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

