// rea decompile_all
// name: FUN_03f936cc
// address: 0x3f936cc
// body: available
// range: 0x3f936cc-0x3f9398b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_03f936cc(undefined8 param_1,int param_2,long *param_3,undefined8 *param_4,uint param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  void *__dest;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = 0;
  switch(param_2) {
  case 2:
  case 4:
  case 5:
    uVar1 = *(undefined1 *)*param_3;
    *param_3 = (long)((undefined1 *)*param_3 + 1);
    *(undefined1 *)param_4 = uVar1;
    break;
  case 3:
  case 6:
  case 7:
    uVar3 = *(undefined2 *)*param_3;
    *param_3 = (long)((undefined2 *)*param_3 + 1);
    *(undefined2 *)param_4 = uVar3;
    break;
  case 8:
    uVar13 = FUN_03f91f84(param_3);
    goto LAB_03f93878;
  case 9:
    uVar13 = FUN_03f91ebc(param_3);
LAB_03f93878:
    *(undefined4 *)param_4 = uVar13;
    return 1;
  case 10:
  case 0xb:
    uVar7 = *(undefined8 *)*param_3;
    *param_3 = (long)((undefined8 *)*param_3 + 1);
    *param_4 = uVar7;
    break;
  case 0xc:
    uVar13 = *(undefined4 *)*param_3;
    *param_3 = (long)((undefined4 *)*param_3 + 1);
    *(undefined4 *)param_4 = uVar13;
    break;
  case 0xd:
    uVar7 = *(undefined8 *)*param_3;
    *param_3 = (long)((undefined8 *)*param_3 + 1);
    *param_4 = uVar7;
    break;
  case 0xe:
    *param_4 = 0;
    if ((*param_3 != 0) && (iVar4 = FUN_03f91f84(param_3), iVar4 != -1)) {
      if ((param_5 & 1) != 0) {
        uVar7 = FUN_03f967d0(*param_3,iVar4);
        *param_4 = uVar7;
        FUN_03f5d7b8(param_4);
      }
      *param_3 = *param_3 + (long)iVar4;
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto switchD_03f9371c_caseD_f;
  case 0x12:
  case 0x15:
  case 0x1c:
switchD_03f9371c_caseD_12:
    *param_4 = 0;
    break;
  case 0x1d:
    if ((*param_3 == 0) || (uVar5 = FUN_03f91f84(param_3), uVar5 == 0xffffffff))
    goto switchD_03f9371c_caseD_12;
    iVar4 = FUN_03f9398c(param_1,param_3,&local_68);
    cVar2 = *(char *)*param_3;
    *param_3 = (long)((char *)*param_3 + 1);
    if ((param_5 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)FUN_03f984c8(local_68,(long)(int)uVar5);
    }
    if (0 < (int)uVar5) {
      uVar12 = 0;
      lVar8 = 0x20;
      do {
        local_70 = 0;
        iVar6 = iVar4;
        if (cVar2 == '\x01') {
          iVar6 = FUN_03f9398c(param_1,param_3,&local_70);
        }
        uVar10 = FUN_03f936cc(param_1,iVar6,param_3,auStack_78,param_5 & 1);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        if ((param_5 & 1) != 0) {
          if (iVar6 == iVar4) {
            __dest = (void *)((long)plVar9 + uVar12 * *(uint *)(*plVar9 + 0x104) + 0x20);
            memcpy(__dest,auStack_78,(ulong)*(uint *)(*plVar9 + 0x104));
            FUN_03f5d7b8(__dest,*(undefined4 *)(*plVar9 + 0x104));
          }
          else {
            lVar11 = FUN_03f99084(local_70,auStack_78);
            plVar9[uVar12 + 4] = lVar11;
            FUN_03f5d7b8((long)plVar9 + lVar8);
          }
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 8;
      } while (uVar5 != uVar12);
    }
    *param_4 = plVar9;
LAB_03f93958:
    FUN_03f5d7b8(param_4);
    break;
  default:
    if (param_2 != 0xff) {
      return 0;
    }
    iVar4 = FUN_03f91f84(param_3);
    if (iVar4 == -1) goto switchD_03f9371c_caseD_12;
    if ((param_5 & 1) != 0) {
      lVar8 = FUN_03fc1f5c(param_1,iVar4);
      uVar7 = FUN_03f9ab74(lVar8 + 0x20);
      *param_4 = uVar7;
      goto LAB_03f93958;
    }
  }
  uVar7 = 1;
switchD_03f9371c_caseD_f:
  return uVar7;
}

