// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity$$.ctor
// address: 0x7479ea4
// body: available
// range: 0x7479ea4-0x747a54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747a31c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747a480 to 0x747a608 System.Security.Claims.ClaimsIdentity$$SafeAddClaims (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Claims_ClaimsIdentity___ctor
               (long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
               ulong param_7)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_09521239 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182558);
    FUN_03f5c2a4(&DAT_09182560);
    FUN_03f5c2a4(&DAT_0919b428);
    FUN_03f5c2a4(&DAT_091759f8);
    FUN_03f5c2a4(&DAT_09185e40);
    FUN_03f5c2a4(&DAT_091ab9a8);
    FUN_03f5c2a4(&DAT_0917be30);
    FUN_03f5c2a4(&DAT_0918d0a0);
    FUN_03f5c2a4(&DAT_091f9780);
    FUN_03f5c2a4(&DAT_09206850);
    FUN_03f5c2a4(&DAT_0921cf10);
    FUN_03f5c2a4(&DAT_0921ce40);
    FUN_03f5c2a4(&DAT_0921ce50);
    DAT_09521239 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917be30);
  FUN_057e0400(lVar2,DAT_091ab9a8);
  param_1[3] = lVar2;
  thunk_FUN_03f5d7b8(param_1 + 3,lVar2);
  lVar2 = thunk_FUN_03f9944c(DAT_091759f8);
  FUN_06c77324(lVar2,DAT_0919b428);
  param_1[4] = lVar2;
  thunk_FUN_03f5d7b8(param_1 + 4,lVar2);
  plVar9 = param_1 + 5;
  *plVar9 = DAT_0921ce50;
  thunk_FUN_03f5d7b8(plVar9);
  plVar8 = param_1 + 6;
  *plVar8 = DAT_0921ce40;
  thunk_FUN_03f5d7b8(plVar8);
  param_1[7] = DAT_091f9780;
  thunk_FUN_03f5d7b8();
  System_Object___ctor(param_1,0);
  if (((param_2 == (long *)0x0) || ((param_7 & 1) == 0)) ||
     (uVar3 = System_String__IsNullOrEmpty(param_4,0), (uVar3 & 1) == 0)) {
    param_1[9] = param_4;
    thunk_FUN_03f5d7b8(param_1 + 9,param_4);
  }
  else {
    lVar2 = *param_2;
    if ((*(byte *)(lVar2 + 0x130) < *(byte *)(DAT_0918d0a0 + 0x130)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d0a0 + 0x130) * 8 + -8) !=
        DAT_0918d0a0)) {
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185e40) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0747a120;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e40,1);
LAB_0747a120:
      lVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
      param_1[9] = lVar2;
      thunk_FUN_03f5d7b8();
    }
    else {
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185e40) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0747a52c;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e40,1);
LAB_0747a52c:
      lVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
      param_1[9] = lVar2;
      thunk_FUN_03f5d7b8();
    }
  }
  uVar3 = System_String__IsNullOrEmpty(param_5,0);
  if ((uVar3 & 1) == 0) {
    *plVar9 = param_5;
    thunk_FUN_03f5d7b8(plVar9,param_5);
  }
  uVar5 = System_String__IsNullOrEmpty(param_6,0);
  if ((uVar5 & 1) == 0) {
    *plVar8 = param_6;
    thunk_FUN_03f5d7b8(plVar8,param_6);
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    if ((*(byte *)(lVar2 + 0x130) < *(byte *)(DAT_09182560 + 0x130)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09182560 + 0x130) * 8 + -8) !=
        DAT_09182560)) {
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185e40) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0747a204;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e40,0);
LAB_0747a204:
      uVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
      uVar3 = System_String__IsNullOrEmpty(uVar6,0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *param_2;
        lVar11 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185e40) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0747a32c;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185e40,0);
LAB_0747a32c:
        uVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
        uVar7 = thunk_FUN_03f9944c(DAT_09182558);
        System_Security_Claims_Claim___ctor
                  (uVar7,lVar11,uVar6,DAT_0921cf10,DAT_09206850,DAT_09206850,param_1,0,0);
        System_Security_Claims_ClaimsIdentity__SafeAddClaim(param_1,uVar7);
      }
    }
    else {
      param_1[0xb] = param_2[0xb];
      thunk_FUN_03f5d7b8();
      if ((uVar3 & 1) != 0) {
        *plVar9 = param_2[5];
        thunk_FUN_03f5d7b8(plVar9);
      }
      if ((uVar5 & 1) != 0) {
        *plVar8 = param_2[6];
        thunk_FUN_03f5d7b8(plVar8);
      }
      param_1[10] = param_2[10];
      thunk_FUN_03f5d7b8();
      plVar8 = (long *)param_2[8];
      plVar9 = plVar8;
      if (plVar8 != (long *)0x0) {
        do {
          if (plVar9 == param_1) {
            uVar6 = thunk_FUN_03fc39d4(&DAT_091fb478);
            uVar6 = System_Environment__GetResourceString(uVar6,0);
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar7 = thunk_FUN_03f9944c();
            System_InvalidOperationException___ctor(uVar7,uVar6,0);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091c4bf0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,uVar6);
          }
          plVar9 = (long *)plVar9[8];
        } while (plVar9 != (long *)0x0);
        if (**(char **)(DAT_09181358 + 0xb8) == '\0') {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        }
        param_1[8] = (long)plVar8;
        thunk_FUN_03f5d7b8();
      }
      lVar2 = *param_2;
      bVar1 = *(byte *)(DAT_0918d0a0 + 0x130);
      if (((*(byte *)(lVar2 + 0x130) < bVar1) ||
          (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918d0a0)) ||
         ((bVar1 <= *(byte *)(*param_1 + 0x130) &&
          (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == DAT_0918d0a0)))) {
        lVar2 = param_2[3];
      }
      else {
        lVar2 = (**(code **)(lVar2 + 0x1a8))(param_2,*(undefined8 *)(lVar2 + 0x1b0));
      }
      System_Security_Claims_ClaimsIdentity__SafeAddClaims(param_1,lVar2);
      if (param_2[2] != 0) {
        uVar7 = System_Array__Clone(param_2[2],0);
        lVar2 = thunk_FUN_03f99350(uVar7,DAT_0917fc88);
        uVar6 = DAT_0917fc88;
        param_1[2] = lVar2;
        uVar6 = thunk_FUN_03f99350(uVar7,uVar6);
        thunk_FUN_03f5d7b8(param_1 + 2,uVar6);
      }
    }
  }
  if (param_3 == 0) {
    return;
  }
  System_Security_Claims_ClaimsIdentity__SafeAddClaims(param_1);
  return;
}

